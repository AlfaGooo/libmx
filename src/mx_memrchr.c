#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *res = (unsigned char *)s + n;

    while (n--)
        if (*(res--) == (unsigned char) c)
            return res + 1;
    return NULL;
}

// void *mx_memrchr(const void *s, int c, size_t n){
//     int i;
// 	    const char *ss = s;

// 	    for (i = n -1; i >= 0; i--) {
// 	        if (ss[i] == (unsigned char)c)
// 	            return (void*)(ss + i);
//      }
//      return NULL;
// }



int main (void)
{

   printf ("src new: %s\n", mx_memrchr("Trinity", 'i', 7));
   printf ("src new: %s\n", mx_memrchr("Trinity", 'M', 7));
   return 0;
}
