#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;

    if (!str)
        return -1;
    if (c == '\0')
        return 1;
    while (*(++str)) {
        if (*str != c)
            if (++count && !(str = mx_strchr(str, c)))
                return count;
    }
    return count;
}
