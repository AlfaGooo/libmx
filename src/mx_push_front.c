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

// void mx_push_front(t_list **list, void *data)
// {
// 	t_list *i;
// 	if(*list)
// 	{
// 		i = mx_create_node(data);
// 		i->next = *list;
// 		*list = i;
// 	}
// 	else
// 	{
// 		*list = mx_create_node(data);
// 	}
	
// }

//https://www.geeksforgeeks.org/listpush_front-listpush_back-c-stl/

