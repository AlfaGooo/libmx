#include "../inc/libmx.h"

// char *mx_strncpy(char *dst, const char *src, int len)
// {
//     for(int i = 0; i < len; i++)
//         dst[i] = src[i];
//     return dst;
// }

//  не готово возможно

// char *mx_strncpy(char *dst, const char *src, int len){
//     char *changed = dst;
//     for (int i = 0; i < len; i++) {
//         *dst++ = *src++;
//     }
//     return changed;
// }

char *mx_strncpy(char *dst, const char *src, int len)
{
	for (int i = -1; (++i) < len; dst[i] = (*src ? *(src++) : '\0'));
	return dst;
}

int main()
{
    int a = 3;
    const char *c = "combat";
    char *n = "ffffff";
    printf("%s", mx_strncpy(n, c, a));
}
