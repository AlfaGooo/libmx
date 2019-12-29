#include "../inc/libmx.h"

static void f_hex(int nbr, int temp, char *hexNumb, int i) {
    while (nbr != 0) {
        temp = nbr % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexNumb[i + 1] = temp;
        nbr = nbr / 16;
    }
}

char *mx_nbr_to_hex(unsigned long nbr) {
    int i = 1;
    int k;
    int temp;
    char *hexNumb = strnew(sizeof(char*));
    char *hex = strnew(sizeof(char*));

    f_hex(nbr, temp, hexNumb, i);
    for (int j = i - 1, k = 0; j >= 0; j--, k++)
        hex[k] = hexNumb[j];
    return hex;
}

