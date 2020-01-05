#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    char *c = **arr;

    while (*c) {
        mx_strdel(&c);
        c++;
    }
    free(arr);
    arr = NULL;
}
