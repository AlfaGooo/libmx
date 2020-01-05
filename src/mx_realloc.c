#include "../inc/libmx.h"

static char *realloc_dop(unsigned long len, size_t size, char *w, void *ptr) {   
    if(len >= size)
        mx_memmove(w, ptr, size);
    if(len < size)
        mx_memmove(w, ptr, len);
    free(ptr);
    ptr = NULL;
    return w;
}


void *mx_realloc(void *ptr, size_t size) {
    char *p = NULL;
    char *w = NULL;
    unsigned long len = mx_strlen((char*)ptr);

    if (!ptr && size != 0) {
        p = (char*)malloc(size);
        return p;
    }
    if (size == 0) {
        free(ptr);
        ptr = NULL;
        return NULL;
    }
    if(size > len)
        w = mx_strnew(size);
    else 
        w = mx_strnew(len);
    w = realloc_dop(len, size, w, ptr);
    return w;
}





// size_t mx_msize(void * p) {
//     size_t *n = p;

//     if (n) { 
//         n--;
//         return *n;
//     }
//     return -1;
// }



// void *mx_realloc(void *ptr, size_t size) {
//     size_t msize = mx_msize(ptr);
//     void *newptr;

//     if (size <= msize)
//         return ptr;
//     newptr = malloc(size);
//     mx_memcpy(newptr, ptr, msize);
//     free(ptr);
//     return newptr;
// }


int main(){
	char *ptr;
	ptr=(char*)malloc(10);

	strcpy(ptr, "fhghhkjhj");
	//ptr="fhghhkjhj";
	size_t size=5;

	char *p=(char*)malloc(20);
	strcpy(p, "fhghhkjhj"); 
	//printf("%s\n",ptr);
	// printf("%s\n",realloc(ptr,size));
	//printf("%s\n",ptr);
	//printf("%s\n",p);
	printf("%s\n",mx_realloc(p,size));
	//printf("%s\n",p);
	return 0;
}