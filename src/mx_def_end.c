#include "../inc/libmx.h"

int mx_def_end(const char *str, int size) {
    int end = 0;

    for (int i = size - 1; i > 0; i--) {
        if (mx_isspace(str[i]) == false) {
            end = i;
            i = 0;
        }
    }
    return end;
}
