#include "../inc/libmx.h"

// char *mx_del_extra_spaces(const char *str)
// {
//     char *tmp_str = mx_strnew(mx_strlen(str));
//     char *new_str;

//     if (!str)
//         return NULL;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (!(mx_isspace(tmp_str[i]))) {
//             if ((mx_isspace(tmp_str[i++]) && tmp_str[i++]) != '\0')
//             tmp_str[i] = ' ';
//         }
//     }
//     new_str = mx_strtrim(tmp_str);
//     free(tmp_str);
//     return new_str;
// }

char *mx_del_extra_spaces(const char *str) {
    if (!str)
	    return NULL;
    char *s1 = mx_strtrim(str);
    char *s2 = mx_strtrim(str);
    char *result = NULL;
    int i = 0; 
    int j = 0;            

    while (s1[i]) {
	if (!mx_isspace(s1[i])) {
	    s2[j] = s1[i];
	    j++;
    } else if (mx_isspace(s1[i]) && !mx_isspace(s1[i + 1])) {
  	    s2[j] = s1[i];
        j++;
    }
        i++;
    }
    s2[j] = '\0';
    result = mx_strnew(mx_strlen(s2));
    mx_strncpy(result, s2, mx_strlen(s2));
    free(s1);
    free(s2);
    return result;
}


int main ()
{
char *name = "\f My name... is \r Neo \t\n ";
mx_del_extra_spaces(name); //returns "My name... is Neo"

printf("%s", name);
}

//не закончил пока


