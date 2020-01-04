#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    char new_file = open(file, O_RDONLY, 0);
    char buff;
    int count = 0;
    size_t symb;
    char *str;
    
    while ((symb = read(new_file, &buff, 1)) > 0)
        count++;
    close(new_file);
    str = mx_strnew(count);
    if (str != NULL && (new_file == open(file, O_RDONLY)) != 0) {
        for (int i = 0; (symb = read(new_file, &buff, 1)) > 0; i++) {
            str[i] = buff;
            close(new_file);
            return str;
        }
    }
    return NULL;
}

//== redline-----
//переписать что бы убрать лишние переменные



// static void write_str(char new_file, char buff, char *str, size_t symb) {
//     for (int i = 0; (symb = read(new_file, &buff, 1)) > 0; i++) {
//         str[i] = buff;
//         close(new_file);
//         return str;
//     }
// }

// char *mx_file_to_str(const char *file) {
//     char new_file = open(file, O_RDONLY, 0);
//     char buff;
//     int count = 0;
//     size_t symb;
//     char *str;
    
//     while ((symb = read(new_file, &buff, 1)) > 0)
//         count++;
//     close(new_file);
//     str = mx_strnew(count);
//     if (str != NULL && (new_file == open(file, O_RDONLY)) != 0) {
//         write_str(char new_file, char buff, char *str, size_t symb);
//     }
//     return NULL;
// }
