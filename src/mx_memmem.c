#include "../inc/libmx.h"

//memmem - ведет поиск подстроки
//алгоритм Бойера-Мура - лучший
//https://rsdn.org/article/alg/textsearch.xml
https://rsdn.org/forum/cpp/1400637.all

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);

void *mx_memmem(void* buf, size_t buflen, void* pat, size_t patlen)
{
    void *end = (char *)buf + buflen - patlen;
    while (buf == (memchr(buf, ((char *)pat)[0], buflen)))
    {
        if (buf > end)
            return 0;
        if (memcmp(buf, pat, patlen)==0)
            return buf;
        buf=(char *)buf + 1;
    }
    return 0;
}



void *mx_memmem(const void *haystack, size_t hlen, const void *needle, size_t nlen)
{
    int needle_first;
    const void *p = haystack;
    size_t plen = hlen;

    if (!nlen)
        return NULL;

    needle_first = *(unsigned char *)needle;

    while (plen >= nlen && (p = memchr(p, needle_first, plen - nlen + 1)))
    {
        if (!memcmp(p, needle, nlen))
            return (void *)p;

        p++;
        plen = hlen - (p - haystack);
    }

    return NULL;
}
