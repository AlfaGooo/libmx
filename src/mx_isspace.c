#include "../inc/libmx.h"

bool mx_isspace(char c) {
    bool b = false;
    char s[6] = {' ', '\t', '\v', '\n', '\f', '\r'};
    int temp = 0;

    for (int a = 0; a < 6; a++) {
        if (c == s[a])
            temp++;
        if (temp > 0)
            b = true;
    }
    return b;
}
