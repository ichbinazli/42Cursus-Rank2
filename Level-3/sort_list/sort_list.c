#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *new;
    new = lst;
    while(lst->next)
    {
        if(cmp(lst->data, lst->next->data) == 0)
        {
        int cmp = lst->data;
        lst->data = lst->next->data;
        lst->next->data = cmp;
        lst = new;
        }
        else
            lst = lst->next;
    }
    lst = new;
    return(lst);
}