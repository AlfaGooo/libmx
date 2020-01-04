#include "../inc/libmx.h"


//не закончена

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
	if (!sub || !str || !replace)
		return NULL;
	int sub_len = mx_strlen(sub);
    int replace_len = mx_strlen(replace);
	char *rez = mx_strnew(mx_strlen(str) + mx_count_substr(str, sub) * (replace_len - sub_len));
    char *next;

	if (!rez)
		return rez;
	for (next = mx_strstr(str, sub); next; next = mx_strstr(str, sub)){
		mx_strncat(rez, str, next - str);
		mx_strncat(rez, replace, replace_len);
		str = next + sub_len;
	}
	return mx_strcat(rez, str);
}

//olya