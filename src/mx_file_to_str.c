#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    char new_file = open(file, O_RDONLY, 0);
    char buff;
    int i;
    int count = 0;
    size_t symb;
    
    while ((symb = read(new_file, &buff, 1)) > 0)
        count++;
    close(new_file);
    char *str = mx_strnew(count);
    if (str != NULL && (new_file == open(file, O_RDONLY)) != 0) {
        for (;(symb = read(new_file, &buff, 1)) > 0; i++) {
            str[i] = buff;
            close(new_file);
            return str;
        }
        return NULL;
    }
}

//== redline