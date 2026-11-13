/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:41:08 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 20:41:12 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main(void)
{
    t_list *lst = ft_lstnew("A");
    if (!lst)
        return (1);
    ft_lstadd_back(&lst, ft_lstnew("B"));
    printf("%s -> %s\n",
        (char *)lst->content, (char *)lst->next->content);
    ft_lstclear(&lst, no_del);
}*/
