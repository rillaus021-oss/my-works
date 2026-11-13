/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:09:09 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 21:09:11 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main(void)
{
    char *s = ft_strdup("Bonjour");
    t_list *node;
    if (!s) return (1);
    node = ft_lstnew(s);
    if (!node) { free(s); return (1); }
    ft_lstdelone(node, free);
    printf("Node libéré\n");
    return (0);
}
*/
