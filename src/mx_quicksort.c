#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int count = 0;
    int first = left;
    int last = right;
    int mid = (left + right) / 2;

    if (arr == NULL)
        return -1;
    if (left < right) {
        for (; first <= last; first++, last--, count++) {
            while (mx_strlen(arr[first]) < mx_strlen(arr[mid]))
                first++;
            while (mx_strlen(arr[last]) > mx_strlen(arr[mid]))
                last--;
            mx_swap_char(arr[first], arr[last]);
        }
        mx_quicksort(arr, first, right);
        mx_quicksort(arr, left, last);
    }
    return count;
}
