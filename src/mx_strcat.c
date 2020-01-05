#include "../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2) {
    int i = mx_strlen(s1);
    int b = mx_strlen(s2);

    for (int y = 0; y <= b; y++)
        s1[i + y] = s2[y];
    return s1;
}
