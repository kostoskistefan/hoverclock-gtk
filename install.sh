#!/bin/sh

RED='\033[1;31m'
GREEN='\033[1;32m'
RESET='\033[0m'

# Check if running as root
if [[ "$EUID" -ne 0 ]]
then
    echo -e ${RED}'[-]'${RESET} "Please rerun this script as root!"
    exit 2
fi

_appname=hoverclock
srcdir=$(dirname $(readlink -f $0))

# Install desktop file
install -Dm644 "${srcdir}/data/${_appname}.desktop" "/usr/share/applications/${_appname}.desktop"

# Install executable
install "${srcdir}/${_appname}" "/usr/bin/${_appname}"

# Install license
install -Dm644 "${srcdir}/LICENSE" "/usr/share/licenses/${_appname}/LICENSE"

echo -e ${GREEN}'[+]'${RESET} "Successfully installed hoverclock!"