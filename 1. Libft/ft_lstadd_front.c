/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:04:06 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 21:04:12 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list *lst = ft_lstnew("B");
    t_list *new_node = ft_lstnew("A");
    if (!lst || !new_node) { free(lst); free(new_node); return (1); }
    ft_lstadd_front(&lst, new_node);
    printf("%s -> %s\n", (char *)lst->content, (char *)lst->next->content);
    free(lst->next);
    free(lst);
    return (0);
}
*/