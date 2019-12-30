#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *dup = mx_strnew(mx_strlen(s1));
    return mx_memcpy(dup, s1, n);
}
