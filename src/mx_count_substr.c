#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int b;

    if (!str || !sub)
        return -1;
    b = mx_strlen(sub);
    for (str = mx_strstr(str, sub); str && *sub; count++) {
        if (mx_strstr(str, sub)) {
            str = mx_strstr(str + b, sub);
        }
    }
    return count;
}
