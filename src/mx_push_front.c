#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data){
    t_list *p;
    
    if (list) {
    	p = mx_create_node(data);
    	if (p) {
        	p->data = data;
        	p->next = *list;
        	*list = p;
        }
    }
}
