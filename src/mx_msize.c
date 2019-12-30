#include "../inc/libmx.h"

size_t mx_msize(void * p) {
    size_t *n = p;

    if (n) { 
        n--;
        return *n;
    }
    return -1;
}
