#include "../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2)
{
    int i = mx_strlen(s1);
    int b = mx_strlen(s2);

    for(int b = 0; s2[b] != '\0'; b++)
        s1[i + b] = s2[b];
    s1[i + b] = '\0';
    return s1;
}
