#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *dst2 = (unsigned char *)dst;
    unsigned char *src2 = (unsigned char *)src;

    for (; n; n--, ++dst2, ++src2)
        if ((*dst2 = *src2) == (unsigned char)c)
            return dst2;
    return NULL;
}
