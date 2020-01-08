#include "../inc/libmx.h"

static void f_str(char *s1, char *s2, int i, int j);

char *mx_del_extra_spaces(const char *str) {
    char *s1;
    char *s2;
    char *res = NULL;
    int i = 0;
    int j = 0;

    if (!str)
        return NULL;
    s1 = mx_strtrim(str);
    s2 = mx_strtrim(str);
    f_str(s1, s2, i, j);
    res = mx_strnew(mx_strlen(s2));
    mx_strncpy(res, s2, mx_strlen(s2));
    free(s1);
    free(s2);
    return res;
}

static void f_str(char *s1, char *s2, int i, int j) {
    while (s1[i]) {
        if (!mx_isspace(s1[i])) {
            s2[j] = s1[i];
            j++;
        }
        else if (mx_isspace(s1[i]) && !mx_isspace(s1[i + 1])) {
            s2[j] = s1[i];
            j++;
        }
        i++;
    }
    s2[j] = '\0';
}
