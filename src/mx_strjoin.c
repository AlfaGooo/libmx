#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *res;

    if (s1 != NULL && s2 == NULL)
        return mx_strdup(s1);
    if (s1 == NULL && s2 != NULL)
        return mx_strdup(s2);
    if (s1 != NULL && s2 != NULL) {
        res = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        mx_strcpy(res, s1);
        mx_strcat(res, s2);
        return res;
    }
    return NULL;
}
