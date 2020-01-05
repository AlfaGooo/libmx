#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    char *copy = dst;
    
    while((*dst++ = *src++));
    return copy;
}
