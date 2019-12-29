#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2)
{
    if(s1 != NULL && s2 == NULL)
        return mx_strdup(s1);
    if(s1 == NULL && s2 != NULL)
        return mx_strdup(s2);
    if(s1 != NULL && s2 != NULL)
    {
        char *join = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        mx_strcpy(join, s1);
        mx_strcat(join, s2);
        return join;
    }
    return NULL;
}


// int main()
// {
//     char *str1 = "this";
//     char *str2 = "dodge ";
//     char *str3 = NULL;
//    // mx_strjoin(str2, str1); //returns "dodge this"
//   //  mx_strjoin(str1, str3); //returns "this"
//   //  mx_strjoin(str3, str3); //returns NULL
//     printf("%s\n", mx_strjoin(str2, str1));
//     printf("%s\n", mx_strjoin(str1, str3));
//     printf("%s", mx_strjoin(str3, str3));

// }
