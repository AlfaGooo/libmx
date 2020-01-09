#include "../inc/libmx.h"

int mx_strlen(const char *s) {
    int i = 0;

    for (; *s; s++)
        i++;
    return i;
}
