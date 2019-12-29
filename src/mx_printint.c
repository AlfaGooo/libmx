#include "../inc/libmx.h"

void mx_printint(int n) {
    int count = 1;
    int num = n;

    if (n < 0)
        mx_printchar('-');
    while (num >=10 || num <= 10) {
        num /= 10;
        count *= 10;
    }
    while (count) {
        if (n < 0)
            mx_printchar(n / count * -1 + '0');
        else
            mx_printchar(n / count + '0');
        n %= count;
    }
}
