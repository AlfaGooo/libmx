#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *res = (unsigned char *)s;

    while (n--) {
        if (*res == (unsigned char)c)
            return res;
        res++;
    }
    return 0;
}
