#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n) {
    char *res = NULL;
    char *d = (char*)dst;
    char *s = (char*)src;
    unsigned long a;

    for (a = 0; a < n; a++) {
        if (s[a] != c)
            d[a] = s[a];
        else if (s[a] == c) {
            d[a] = s[a];
            return &d[a + 1];
        }
    }
    return res;
}
