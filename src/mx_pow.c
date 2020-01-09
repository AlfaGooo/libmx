#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double res = n;

    if(pow == 0)
        return 1;
    if(pow > 1)
        res *= mx_pow(n, pow - 1);
    return res;
}
