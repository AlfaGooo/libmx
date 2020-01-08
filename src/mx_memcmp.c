#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *mass1 = (unsigned char*)s1;
    unsigned char *mass2 = (unsigned char*)s2;

    for(; n > 0; n--, mass1++, mass2++)
        if (*mass1 != *mass2)
            return  *mass1 - *mass2;
    return 0;
}
