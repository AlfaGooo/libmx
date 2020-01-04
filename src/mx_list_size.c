#include "../inc/libmx.h"



//https://www.tutorialspoint.com/learn_c_by_examples/size_of_doubly_linked_list_in_c.htm


//валеры
int mx_list_size(t_list *list){
    int count = 1;
    t_list *temp = list;
    
    if (list == NULL)
        return 0;
    while (temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}


// int mx_list_size(t_list *list) {
//     t_list *current_node = list;
//     int count = 0;

//     while(current_node != NULL){
//         current_node = current_node->next;
//         count++;
//     }
//     return count;
// }
