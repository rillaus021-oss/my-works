#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current;
    t_list *next;

    if (!lst || !del)
        return ;
    current = *lst;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}