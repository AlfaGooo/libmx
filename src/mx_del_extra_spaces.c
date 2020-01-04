#include "../inc/libmx.h"

//?
char *mx_del_extra_spaces(const char *str)
{
    char *tmp_str = mx_strnew(mx_strlen(str));
    char *new_str;

    if (!str)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(mx_isspace(tmp_str[i]))) {
            if (mx_isspace(tmp_str[i]) && (!mx_isspace(tmp_str[i + 1])))
            tmp_str[i] = ' ';
        }
    }
    new_str = mx_strtrim(tmp_str);
    free(tmp_str);
    return new_str;
}

