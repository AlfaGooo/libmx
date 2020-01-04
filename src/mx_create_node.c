#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
	t_list *swp;
	swp = (t_list *)malloc(sizeof(swp));

    if (swp != NULL) {
        swp->data = data;
	    swp->next = NULL;
        return swp;
    }
    return 0;
}
