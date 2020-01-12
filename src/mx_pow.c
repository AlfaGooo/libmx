#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double res = n;

    if (pow == 0)
        res = 1;
    for (unsigned int a = 1; a < pow; a++)
        res = res * n;
    return res;
}
