#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    t_list *i = *head;

    if (head == NULL || *head == NULL)
        return;
    *head = i->next;
    free(i);
}
