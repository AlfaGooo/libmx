#include "../inc/libmx.h"

//ne rabotaet
char *mx_strtrim(const char *str) {
    int end = mx_strlen(str);
    int start = 0; 
    int a = 0;
    char *new_str;

    if (str != NULL) {
        while (mx_isspace(str[a])) {
            start++;
            a++;
        }
        while (mx_isspace(str[end - 1]))
            end--;
        new_str = mx_strnew(end - start);
        for (int i = start, j = 0; i < end; i++, j++)
            new_str[j] = str[i];
        return new_str;
    }
    return NULL;
}


// char *mx_strtrim(const char *str) {
//     char *u = NULL;

//     if (!str)
//         u = NULL;
//     else {
//         int sz = mx_strlen(str);
//         int start = mx_def_start(str, sz);
//         int end = mx_def_end(str, sz);
        
//         u = mx_strnew(end - start + 1);
//         for (int a = 0; a <= end - start; a++)
//             u[a] = str[a + start];
//     }
//     return u;
// }



// int main() {
// 	const char *name ="    \nMy  name... \t \t  \tis  \t  Neo\t";
// 	printf("%s\n", mx_strtrim(name));
// 	return 0;
// }
