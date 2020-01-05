#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	unsigned char *dst2 = (unsigned char *)dst;
	unsigned char *src2 = (unsigned char *)src;

	for (size_t i = 0; i < n; i++)
		dst2[i] = src2[i];
	return dst2;
}
