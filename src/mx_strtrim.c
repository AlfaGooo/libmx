#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    int end = mx_strlen(str) - 1;
    int a = 0;
    char *new_str;

    if (str != NULL) {
        while (mx_isspace(str[a++]));
        while (mx_isspace(str[end--]));
        new_str = mx_strnew((end - a));
        for (int i = a, j = 0; i < end; i++, j++)
            new_str[j] = str[i];
        return new_str;
    }
    return NULL;
}
