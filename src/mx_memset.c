#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    char *res = (char*)b;

    while (len--)
        *res++ = (unsigned char)c;
    return res;
}
