#include "../inc/libmx.h"

static void f_str(char *s1, char *s2, int i, int j) {
    while (s1[i]) {
	    if (!mx_isspace(s1[i])) {
	        s2[j] = s1[i];
	        j++;
        }  
        else if (mx_isspace(s1[i]) && !mx_isspace(s1[i + 1])) {
  	        s2[j] = s1[i];
            j++;
        }
        i++;
    }
    s2[j] = '\0';
    printf("str s2 =%s\n", s2);
}

char *mx_del_extra_spaces(const char *str) {
    if (!str)
	    return NULL;
    char *s1 = mx_strtrim(str);
    char *s2 = mx_strtrim(str);
    char *res = NULL;
    int i = 0; 
    int j = 0;            

    printf("str s1 =%s\n", s2);
    f_str(s1, s2, i, j);
    res = mx_strnew(mx_strlen(s2));
    mx_strncpy(res, s2, mx_strlen(s2));
    printf("str s3 =%s\n", s2);
    free(s1);
    free(s2);
    return res;
}
