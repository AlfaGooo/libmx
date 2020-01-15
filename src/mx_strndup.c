#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    unsigned long size = mx_strlen(s1);
    char *t = NULL;

    if (n >= size) {
        t = mx_strnew(size);
        if (t)
            mx_strcpy(t, s1);
    }
    else
        if (n < size) {
            t = mx_strnew(n);
            if (t)
                mx_strncpy(t, s1, n);
        }
    return t;
}
