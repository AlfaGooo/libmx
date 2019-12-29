#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    if(str == NULL || sub == NULL || replace == NULL)
        return NULL;
    
    char *newstr = str;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == sub[i])
            mx_swap_char(newstr[i], replace[i]);
        if(replace[i] == '\0')
            break;
    }
    return newstr;
}

//не закончена

