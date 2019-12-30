#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
    int count = 0;

    while (s)
        s[count++];
    for (int i = count - 1, j = 0; i > count / 2; i--, j++)
        mx_swap_char(&s[i], &s[j]);
}
