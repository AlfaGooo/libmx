#include "../inc/libmx.h"

char *mx_itoa(int number)
{
    char *res;
    int count = 1;
    int j = 0;
    int len = 1;
    int num = number;

    while(num <= 10 || num >= 10)
    {
        count *= 10;
        len++;
        num /= 10;
    }
    res = mx_strnew(len);
    if(number == -2147483648)
    {
        res = "-2147483648";
        return res;
    }
    if(number < 0)
    {
        number *= -1;
        res[0] = '-';
        j = 1;
    }
    while(count != 0)
    {
        num = number / count + '0';
        number %= count;
        count /= 10;
        res[j] = num;
        j++;
    }
    return res;
}

//валеры код
char *mx_itoa(int number){
    char *rez = mx_strnew(11);
    if (!rez)
        return NULL;
    unsigned int k = 0, num = (number >= 0) ? number : -number;
    if (number == 0)
        rez[k++] = '0';
    else {
        if (number < 0)
            rez[k++] = '-';
        for (unsigned int r = 1000000000; r > 0; r /= 10)
            if (num >= r)
                rez[k++] = '0' + ((num / r) % 10);
        }
    return mx_realloc(rez, (k + 1) * sizeof(char));
}
//не готов


// char *itoa(int number, char *destination, int base) {
//   int count = 0;
//   do {
//     int digit = number % base;
//     destination[count++] = (digit > 9) ? digit - 10 +'A' : digit + '0';
//   } while ((number /= base) != 0);
//   destination[count] = '\0';
//   int i;
//   for (i = 0; i < count / 2; ++i) {
//     char symbol = destination[i];
//     destination[i] = destination[count - i - 1];
//     destination[count - i - 1] = symbol;
//   }
//   return destination;
// }
