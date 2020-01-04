#include "../inc/libmx.h"

double mx_pow(double n, int pow) {
    double res = n;
    
    if (pow == 0)
        return 1;
    if (pow < 0)
        return 0;
    for (int i = 1; i < pow; i++)
        n = res * n;
    return n;
}
