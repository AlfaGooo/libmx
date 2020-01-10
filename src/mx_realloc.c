#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    size_t l;
    void *res;

    if (!ptr && size)
        return malloc(size);
    if (size == 0 && ptr) {
        free(ptr);
        return NULL;
    }
    l = mx_strlen(ptr);
    if (l < size)
        l = size;
    res = malloc(l);
    if (!res)
        return NULL;
    res = mx_memmove(res, ptr, l);
    return res;
}
