#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *p = mx_create_node(data);
    t_list *last;

    if ((p == NULL) || (list == NULL))
        return;
    p->data = data;
    p->next = NULL;
    if (*list == NULL)
        *list = p;
    else {
        last = *list;
        while (last->next != NULL)
            last = last->next;
        last->next = p;
    }
}
