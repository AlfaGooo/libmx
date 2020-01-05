#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = -1;
    int right = size;
    int mid;

    while (left < right - 1) {
        (*count)++;
        mid = (left + right) / 2;
        if (mx_strcmp(arr[mid], s) < 0)
            left = mid;
        else if (mx_strcmp(arr[mid], s) == 0)
            return mid;
        else
            right = mid;
    }
    (*count) = 0;
    return -1;
}
