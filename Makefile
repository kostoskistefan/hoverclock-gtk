TARGET := hoverclock

SOURCE_DIR := source
DATA_DIR   := data
OBJECT_DIR := obj

# TODO: Find alternate way to build resources first and then link everything together
TMP_SOURCE_FILES := $(shell find $(SOURCE_DIR) -name "*.cc")
SOURCE_FILES = $(filter-out $(SOURCE_DIR)/resources.cc, $(TMP_SOURCE_FILES))
OBJECT_FILES := $(patsubst $(SOURCE_DIR)/%.cc, $(OBJECT_DIR)/%.o, $(SOURCE_FILES))

CFLAGS := $(shell pkg-config --cflags --libs gtkmm-4.0)-lX11 -Wall -Wextra -pedantic -g

all: resources hoverclock

.PHONY: hoverclock
hoverclock: $(OBJECT_FILES) 
	g++ -o $(TARGET) $(OBJECT_FILES) $(OBJECT_DIR)/resources.o $(CFLAGS)

.PHONY: resources
resources:
	glib-compile-resources $(DATA_DIR)/$(TARGET).gresource.xml --target=$(SOURCE_DIR)/resources.cc --sourcedir=$(DATA_DIR) --generate-source
	g++ -c -o $(OBJECT_DIR)/resources.o $(SOURCE_DIR)/resources.cc $(CFLAGS)

$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.cc
	@mkdir -p $(@D)
	g++ -c -o $@ $< $(CFLAGS)

clean:
	@rm -rf $(OBJECT_DIR) $(TARGET) $(SOURCE_DIR)/resources.cc

$(shell mkdir -p $(OBJECT_DIR))
