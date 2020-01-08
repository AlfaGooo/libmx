#include "../inc/libmx.h"

int mx_list_size(t_list *list){
    int count = 1;
    t_list *temp = list;

    if (list == NULL)
        return 0;
    while (temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}
