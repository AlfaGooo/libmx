#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (arr == NULL || delim == NULL || *arr == NULL)
        return ;
    for (int y = 0; arr[y] != NULL; y++) {
        mx_printstr(arr[y]);
        if (arr[y + 1])
            mx_printstr(delim);
    }
    mx_printstr("\n");
}
