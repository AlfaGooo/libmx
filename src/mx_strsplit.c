#include "../inc/libmx.h"


//valeriy
char **mx_strsplit(char const *s, char c) {
    int count = mx_count_words(s--, c);
    int h = 0;
    char **arr = malloc((count + 1) * sizeof(char *));
    char *next;

    if ((!s) || (!arr))
        return NULL;
    arr[count] = NULL;
    while (*(++s))
        if (*s != c && ((next = mx_strchr(s, c)) 
            || (next = mx_strchr(s, '\0'))) 
            && (arr[h++] = mx_strndup(s, next - s)) 
            && (s = next) && !(*s))
            return arr;
    return arr;
}

//olya