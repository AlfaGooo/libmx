
#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    t_list *p;

    if (*head == NULL || head == NULL)
        return;
    p = (*head)->next;
    free(*head);
    *head = p;
}
