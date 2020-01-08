#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int sub_len;
    int r_len;
    char *res;
    char *next;
    int temp;

    if (!sub || !str || !replace)
        return NULL;
    sub_len = mx_strlen(sub);
    r_len = mx_strlen(replace);
    temp = mx_strlen(str) + mx_count_substr(str, sub);
    res = mx_strnew(temp * (r_len - sub_len));
    if (!res)
        return res;
    for (next = mx_strstr(str, sub); next; next = mx_strstr(str, sub)) {
        mx_strncat(res, str, next - str);
        mx_strncat(res, replace, r_len);
        str = next + sub_len;
    }
    return mx_strcat(res, str);
}
