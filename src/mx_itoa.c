#include "../inc/libmx.h"

//валеры код
// char *mx_itoa(int number){
//     char *rez = mx_strnew(11);
//     if (!rez)
//         return NULL;
//     unsigned int k = 0, num = (number >= 0) ? number : -number;
//     if (number == 0)
//         rez[k++] = '0';
//     else {
//         if (number < 0)
//             rez[k++] = '-';
//         for (unsigned int r = 1000000000; r > 0; r /= 10)
//             if (num >= r)
//                 rez[k++] = '0' + ((num / r) % 10);
//         }
//     return mx_realloc(rez, (k + 1) * sizeof(char));
// }
// //не готов


// char *itoa(int number, char *destination, int base) {
//   int count = 0;
//   do {
//     int digit = number % base;
//     destination[count++] = (digit > 9) ? digit - 10 +'A' : digit + '0';
//   } 
//     while ((number /= base) != 0);
//   destination[count] = '\0';
//   int i;
//   for (i = 0; i < count / 2; ++i) {
//     char symbol = destination[i];
//     destination[i] = destination[count - i - 1];
//     destination[count - i - 1] = symbol;
//   }
//   return destination;
// }

int main()
{
    printf("%s", mx_itoa(3458));
}
