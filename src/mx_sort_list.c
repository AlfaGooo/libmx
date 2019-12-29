#include "../inc/libmx.h"

//мой код
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
	t_list *i = list;
	t_list temp;
    
    if (!lst || !cmp)
        return lst;
	while(i) {
		while(i) {	
			if(cmp(i->next, i->next->next) == FALSE) {
				temp = i->next;
				i->next = i->next->next;
				i->next->next = temp;
			}
			i = i->next;
		}
	}
	return *i;
} 

валеры код
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    void *c;
    
    if (!lst || !cmp)
        return lst;
    for (t_list *i = lst; i -> next; i = i -> next)
        for (t_list *j = i -> next; j; j = j -> next)
            if (cmp(i -> data, j -> data)){
                c = i -> data;
                i -> data = j -> data;
                j -> data = c;
            }
    return lst;
}

