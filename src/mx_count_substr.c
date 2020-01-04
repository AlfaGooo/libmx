#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int b = mx_strlen(sub);

    if (!str || !sub)
        return -1;
    while (str) {
        if (mx_strstr(str, sub)) {
            str = mx_strstr(str + b, sub);
            count++;
        }
    }
    return count;
}
