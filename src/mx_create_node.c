#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
	t_list *nd = malloc(sizeof(t_list));

	if(!nd) 
		return NULL;
	nd->data = data;
	nd->next = NULL;
	return nd;
}
