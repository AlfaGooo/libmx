#include "../inc/libmx.h"


void mx_pop_back(t_list **head) {
    t_list *new_list = *head;

    if (head == NULL)
        return;
    if (*head == NULL)
        return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    while (new_list->next->next != NULL)
        new_list = new_list->next;
    free(new_list->next);
    new_list->next = NULL;
}
