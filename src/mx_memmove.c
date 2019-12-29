//memmove – копирование массивов (в том числе пересекающихся).
//restrict только етот указатель указывает на этот блок памяти

#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char buf[len];

    memcpy(buf,src,len);
    memcpy(dst,buf,len);
    return dst;
}

int main (void)
{
   // Исходный массив данных
   unsigned char src[10]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
    mx_memmove(&src[4], &src[3], 3);

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);

   return 0;
}
