#include <fcntl.h>
#include <stdio.h>

extern int csua_open(const char *path, int oflag, mode_t mode);

extern char **environ;
