#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char buf[len];

    memcpy(buf,src,len);
    memcpy(dst,buf,len);
    return dst;
}
