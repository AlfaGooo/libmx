#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    t_list *last;

    if (head == NULL || *head == NULL)
        return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    last = *head;
    while (last -> next->next != NULL)
        last = last->next;
    free(last->next);
    last->next = NULL;
}
