#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *res;

    res = malloc(size);
    if (res)
        mx_memcpy(res, ptr, size);
    return res;
}
