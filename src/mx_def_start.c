#include "../inc/libmx.h"

int mx_def_start(const char *str, int size) {
    int start = 0;

    for (int i = 0; i < size; i++) {
        if (mx_isspace(str[i]) == false) {
            start = i;
            i = size - 1;
        }
    }
    return start;
}
