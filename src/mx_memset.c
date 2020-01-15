#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    char *p = (char*)b;

    for (unsigned long a = 0; a < len; a++)
        p[a] = c;
    return b;
}
