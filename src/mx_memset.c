#include "../inc/libmx.h"

//memset – заполнения массива указанными символами.
void *mx_memset(void *b, int c, size_t len) {
	char *res = (char*) b;

	while (len--)
		*res++ = (unsigned char) c;
	return res;
}

int main (void)
{
   // Исходный массив
   unsigned char src[15]= "1234567890";
 
   // Заполняем массив символом ‘1’
   mx_memset(src, '9', 19);

   // Вывод массива src на консоль
   printf ("src: %s\n",src);

   return 0;
}
