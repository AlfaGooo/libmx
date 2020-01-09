#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long res = 0;

    for(int i = 0; hex[i]; i++)
        if (hex[i] > 47 && hex[i] < 58)
            res = res * 16 + (hex[i] - '0');
        else if (hex[i] > 64 && hex[i] < 71)
            res = res * 16 + (hex[i] - 7 - '0');
        else if (hex[i] > 96 && hex[i] < 103)
            res = res * 16 + (hex[i] - 39 - '0');
    return res;
}
