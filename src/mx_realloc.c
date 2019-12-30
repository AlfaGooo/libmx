#include "../inc/libmx.h"

// void *mx_realloc(void *ptr, size_t size) {
//     void *newptr;
//     int msize = getsize(ptr);

//     if (size <= msize)
//         return ptr;
//     newptr = malloc(size);
//     memcpy(newptr, ptr, msize);
//     free(ptr);
//     return newptr;
// }


size_t mx_msize(void * p) {
    size_t *n = p;

    if (n) { 
        n--;
        return *n;
    }
    return -1;
}



void *mx_realloc(void *ptr, size_t size) {
    int msize = mx_msize(ptr);
    void *newptr;

    if (size <= msize)
        return ptr;
    newptr = malloc(size);
    memcpy(newptr, ptr, msize);
    free(ptr);
    return newptr;
}


// int main() {
//     char * aa = malloc(50);
//     char * bb;
//     printf("aa size is %zu\n",getsize(aa)); //
//     strcpy(aa,"my cookie");
//     bb = reallocation(aa, 100);
//     printf("bb size is %zu\n",getsize(bb)); //
//     printf("%s\n",bb); //
//     free(bb);
// }


