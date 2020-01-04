#include "../inc/libmx.h"

//memmem - ведет поиск подстроки
//алгоритм Бойера-Мура - лучший
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    void *end = (char *)big + big_len - little_len;

    while (big == (memchr(big, ((char *)little)[0], big_len))) {
        if (big > end)
            return 0;
        if (memcmp(big, little, little_len) == 0)
            return (void *) big;
        big = (char *)big + 1;
    }
    return 0;
}



// void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
// 	const char *haystack = big;

// 	if (big_len < little_len || little_len == 0)
// 		return NULL;
// 	while ((big_len >= little_len) && (mx_memcmp(haystack, little, little_len) != 0))
// 		haystack++, big_len--;
// 	return (big_len >= little_len) ? (void *)haystack : NULL;

// void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
//     unsigned char * big_buf = (unsigned char* ) big;
//     unsigned char * little_buf = (unsigned char* ) little;

//     int flag = 0;
//     for (size_t i = 0; i < big_len; i++) {
//         flag = 1;
//         for (size_t j = 0; j < little_len; j++) {
//             if (i + j >= big_len) return 0;
//             if (big_buf[i+j] != little_buf[j]) {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1) 
//             return &big_buf[i];
//     }
//     return NULL;
// }

