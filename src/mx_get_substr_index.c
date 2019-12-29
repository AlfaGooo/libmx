#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -2;
    if (mx_strstr(str, sub))
        return mx_strlen(str) - mx_strlen(mx_strstr(str, sub));
    return -1;
}
