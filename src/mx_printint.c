#include "../inc/libmx.h"

void mx_printint(int n) {
    int count = 1;
    int num = n;

    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        n *= -1;
        mx_printchar('-');
    }
    for (; num >= 10 || num <= -10; num /= 10, count *= 10);
    while (count != 0) {
        num = n / count + '0';
        n %= count;
        count /= 10;
        mx_printchar(num);
    }
}
