#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	int sub_len;
    int replace_len;
	char *rez;
    char *next;
	
	if (!sub || !str || !replace)
		return NULL;
	sub_len = mx_strlen(sub);
    replace_len = mx_strlen(replace);
	rez = mx_strnew(mx_strlen(str) + mx_count_substr(str, sub) * (replace_len - sub_len));

	if (!rez)
		return rez;
	for (next = mx_strstr(str, sub); next; next = mx_strstr(str, sub)) {
		mx_strncat(rez, str, next - str);
		mx_strncat(rez, replace, replace_len);
		str = next + sub_len;
	}
	return mx_strcat(rez, str);
}
