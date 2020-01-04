#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

    for (; i < len; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}
// int main()
// {
//     int a = 3;
//     const char *c = "combat";
//     char *n = "ffffff";
//     printf("%s", mx_strncpy(n, c, a));
// }
