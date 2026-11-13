#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        new->next = NULL;
        *lst = new;
    }
    else
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}