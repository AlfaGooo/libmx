#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    void *end = (char *)big + big_len - little_len;

    while (big == (mx_memchr(big, ((char *)little)[0], big_len))) {
        if (big > end)
            return 0;
        if (mx_memcmp(big, little, little_len) == 0)
            return (void *)big;
        big = (char *)big + 1;
    }
    return 0;
}
