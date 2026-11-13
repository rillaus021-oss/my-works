#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    void *content;
    t_list *new;
    t_list *result;

    if (!f || !del)
        return (NULL);
    result = NULL;
    while (lst)
    {
        content = f(lst->content);
        new = ft_lstnew(content);
        if (!new)
        {
            del(content);
            ft_lstclear(&result, del);
            return (NULL);
        }
        ft_lstadd_back(&result, new);
        lst = lst->next;
    }
    return (result);
}