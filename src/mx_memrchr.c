#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *res = (unsigned char *)s + n;

    while (n--)
        if (*(res--) == (unsigned char) c)
            return res + 1;
    return NULL;
}
