char **mx_strsplit(const char *s, char c) {
    char **new_s;
    int mass_start = 0;
    int j = 0;
    int mass_size = mx_count_words(s, c); //return 3  нужно ли считать слова?

    for (int i = 0; s[i]; i++) {
        if (s[i] == c)
            mx_swap_char(s[i], ' ');
    }
    s = mx_del_extra_spaces(s); //["Good bye, Mr. Anderson."]
    for (int i = 0; s[i] != '\0' && mass_start <= mass_size; i++) {    
        for (int i = j; s[i] != ',' || '.'; i++, j++);
        new_s[mass_start] = mx_strnew(j - i);
        for (int i = 0; i <= j; i++)
            new_s[mass_start][i] = s[i];
        mass_start++;
    }
    return new_s;
}


// char *mx_del_extra_spaces(const char *str) {
//     char *tmp_str = mx_strnew(mx_strlen(str));
//     char *new_str;

//     if (!str)
//         return NULL;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (!(mx_is_delim(tmp_str[i]))) {
//             if (mx_is_delim(tmp_str[i++]) && tmp_str[i++]) != '\0')
//             tmp_str[i] = ' ';
//         }
//     }
//     new_str = mx_strtrim(tmp_str);
//     free(tmp_str)
//     return new_str;
// }

//написать ис спейс и функцию ис делим
