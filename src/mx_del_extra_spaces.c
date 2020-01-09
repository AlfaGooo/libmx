#include "../inc/libmx.h"

static int def_white(const char *str, int end, int start);
static char *write_str(const char *str, int end, int r, int start);

char *mx_del_extra_spaces(const char *str) {
    char *res = NULL;
    int r = 0;
    int sz;
    int end;
    int start;

    if (str == NULL)
        res = NULL;
    else {
        sz = mx_strlen(str);
        end = mx_def_end(str, sz);
        start = mx_def_start(str, sz);
        r = def_white(str, end, start);
        res = write_str(str, end, r, start);
    }
    return res;
}

static int def_white(const char *str, int end, int start) {
    int temp = 0;
    int r = 0;

    for (int a = start; a <= end; a++) {
        if (mx_isspace(str[a]) == false) {
            r++;
            temp = 1;
        }
        if (mx_isspace(str[a]) == true && temp == 1) {
            r++;
            temp = 0;
        }
    }
    return r;
}

static char *write_str(const char *str, int end, int r, int start) {
    char *u = mx_strnew(r);
    int temp = 0;
    int t = 0;

    for (int a = start; a <= end; a++) {
         if (mx_isspace(str[a]) == false) {
            u[t++] = str[a];
            temp = 1;
        }
        if (mx_isspace(str[a]) == true && temp == 1) {
            u[t++] = ' ';
            temp = 0;
        }
    }
    return u;
}
