#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
    int count;

    if(!s)
        return;
    count = mx_strlen(s);
    for (int i = count - 1, j = 0; i > count / 2 - 1; i--, j++)
        mx_swap_char(&s[i], &s[j]);
}
