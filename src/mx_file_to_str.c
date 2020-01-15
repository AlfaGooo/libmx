#include "../inc/libmx.h"

static char *file_to_str_dop(const char *file, char *u, char *buf);

char *mx_file_to_str(const char *file) {
    char *u = NULL;
    int bytes;
    int size = 65534;
    char *buf = NULL;
    int fd = 0;

    if (!file)
        return NULL;
    fd = open(file, O_RDONLY);
    if (fd < 0)
        return NULL;
    buf = mx_strnew(size);
    bytes = read(fd, buf, size);
    if (bytes <= 0)
        return NULL;
    close(fd);
    u = file_to_str_dop(file, u, buf);
    return u;
}

static char *file_to_str_dop(const char *file, char *u, char *buf){
    int sz = 0;
    int fd = 0;
    int bytes = 0;

    for (; buf[sz] != '\0'; sz++);
    free(buf);
    u = mx_strnew(sz);
    fd = open(file, O_RDONLY);
    if (fd < 0)
        return NULL;
    bytes = read(fd, u, sz);
    if (bytes <= 0)
        return NULL;
    close(fd);
    return u;
}
