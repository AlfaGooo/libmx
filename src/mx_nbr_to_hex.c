#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	unsigned long n = nbr;
	int len = 1;
    int temp;
    char *hex;

	if (n >= 16)
	    for (; n = n / 16, n > 0; len++);
 	hex = mx_strnew(len);
	for (int i = len - 1; i >= 0; i--) {
	    temp = nbr % 16;
	    if (temp < 10)
	        hex[i] = temp + 48;
	    else
	        hex[i] = temp + 87;
	    nbr = nbr / 16;
    }
    return hex;
}
