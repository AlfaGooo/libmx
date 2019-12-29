#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data)
{
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


void mx_push_back(t_list **list, void *data)
{
	t_list *i = *list;

	if(i) {
		while(i->next) {
			i = i->next;
			i->next = mx_create_node(data);
		}
	}
	else
		*list = mx_create_node(data);
}


void mx_push_back(t_list **list, void *data){
    while (*list){
        list = &(*list)->next;
    }
    *list = malloc(sizeof(**list));
    (*list)->data = data;
    (*list)->next = NULL;
}

//https://www.geeksforgeeks.org/vectorpush_back-vectorpop_back-c-stl/