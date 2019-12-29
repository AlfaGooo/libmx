#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    int i = 0;

    while (list) {
        list = list->next;
        i++;        
    }
    return i;
}

https://www.tutorialspoint.com/learn_c_by_examples/size_of_doubly_linked_list_in_c.htm

 int mx_list_size(t_list *list)
 {
 	t_list *i = list;
 	int count = 0;
 	while(i)
	{
		i = i->next;
		count++;
	}
	return count;
}


int mx_list_size(t_list *list){
    int i = 1;
    
    if (list == NULL)
        return 0;
    t_list *temp = list;
    while (temp -> next != NULL) {
        temp = temp->next;
        i++;
    }
    return i;
}

int mx_list_size(t_list *list) {
    t_list *current_node = list;
    int count = 0;

    while(current_node != NULL){
        current_node = current_node->next;
        count++;
    }
    return count;  
}