#include "../inc/libmx.h"

static void sw_sort(char **arr, int low, int high);
static bool check_q(char **arr, int low, int high, int *shifts);

int mx_quicksort(char **arr, int left, int right) {
    int shifts = 0;
    int low = left;
    int high = right;
    char *pivot = arr[low + ((high - low) / 2)];

    if (arr == NULL || *arr == NULL)
        return -1;
    if (left < right) {
        while (low <= high) {
            for (; mx_strlen(arr[low]) < mx_strlen(pivot); low++);
            for (; mx_strlen(arr[high]) > mx_strlen(pivot); high--);
            if (check_q(arr, low, high, &shifts)) {
                sw_sort(arr, low, high);
                low++;
                high--;
            }
        }
        shifts += mx_quicksort(arr, left, high);
        shifts += mx_quicksort(arr, low, right);
    }
    return shifts;
}

static void sw_sort(char **arr, int low, int high) {
    char *tmp;

    tmp = arr[low];
    arr[low] = arr[high];
    arr[high] = tmp;
}

static bool check_q(char **arr, int low, int high, int *shifts) {
    if (low <= high) {
        if (arr[low] != arr[high] 
            && mx_strlen(arr[low]) != mx_strlen(arr[high])) {
            (*shifts)++;
            return 1;
        }
        else
            return 1;
    }
    return 0;
}
