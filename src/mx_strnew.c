#include "../inc/libmx.h"

char *mx_strnew(const int size) {
    char *new = (char *)malloc((size + 1) * sizeof(char));
    
    if (new == NULL)
        return NULL;
    for (int i = 0; i < size; i++)
        new[i] = '\0';
    return new;
}
