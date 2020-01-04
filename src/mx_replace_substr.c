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

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
	if (!sub || !str || !replace)
		return NULL;
	int sub_len = mx_strlen(sub);
    int replace_len = mx_strlen(replace);
	char *rez = mx_strnew(mx_strlen(str) + mx_count_substr(str, sub) * (replace_len - sub_len));
    
	if (!rez)
		return rez;
	for (char *next = mx_strstr(str, sub); next; next = mx_strstr(str, sub)){
		mx_strncat(rez, str, next - str);
		mx_strncat(rez, replace, replace_len);
		str = next + sub_len;
	}
	return mx_strcat(rez, str);
}
