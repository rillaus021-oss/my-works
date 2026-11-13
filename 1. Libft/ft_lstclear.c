/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:06:47 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 21:06:49 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

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
/*
int main(void)
{
    char *a = ft_strdup("A");
    char *b = ft_strdup("B");
    t_list *lst;
    t_list *second;
    if (!a || !b) { free(a); free(b); return (1); }
    lst = ft_lstnew(a);
    second = ft_lstnew(b);
    if (!lst || !second) { free(lst); free(second);
    free(a); free(b); return (1); }
    ft_lstadd_back(&lst, second);
    ft_lstclear(&lst, free);
    printf("Liste vide : %s\n", lst == NULL ? "OUI" : "NON");
    return (0);
}
*/