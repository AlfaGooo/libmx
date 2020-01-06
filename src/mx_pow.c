#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double res = n;
    unsigned int i;
    if (pow == 0)
        return 1;
    if (pow < 0)
        return 0;
    for (i = 1; i < pow; i++)
        n = res * n;
    return n;
}
