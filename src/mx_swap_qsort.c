#include "../inc/libmx.h"

void mx_swap_qsort(char *s1, char *s2) {
    char *swp;

    swp = s1;
    s1 = s2;
    s2 = swp;
}
