#include "run_guard.h"
#include <sys/file.h>
#include <errno.h>
#include <stdio.h>

bool Guard::check_if_instance_already_running()
{
    int pid_file = open("/tmp/hoverclock.pid", O_CREAT | O_RDWR, 0666);

    int rc = flock(pid_file, LOCK_EX | LOCK_NB);

    if (rc)
        return EWOULDBLOCK == errno;

    else return false;
}