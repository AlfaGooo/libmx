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
        for (count = 0; (symb = read(new_file, &buff, 1)) > 0; count++) {
            str[count] = buff;
            close(new_file);
            return str;
        }
    }
    return NULL;
}

//== redline-----
//переписать что бы убрать лишние переменные

