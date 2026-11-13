/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:00:00 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 00:00:00 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new;
	t_list	*result;

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

/*
** TEST RAPIDE : decommenter ce bloc pour tester cette fonction.
** Compiler ce fichier avec libft.a, sans inclure deux fois le meme .o.

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static void no_del(void *p) { (void)p; }
static void print_content(void *content) { printf("%s\n", (char *)content); }
static void *duplicate_content(void *content) { return (ft_strdup((char *)content)); }
int main(void)
{
    t_list *lst = ft_lstnew("Bonjour");
    t_list *result;
    if (!lst) return (1);
    ft_lstadd_back(&lst, ft_lstnew("42"));
    result = ft_lstmap(lst, duplicate_content, free);
    if (!result) { ft_lstclear(&lst, no_del); return (1); }
    ft_lstiter(result, print_content);
    ft_lstclear(&result, free);
    ft_lstclear(&lst, no_del);
    return (0);
}
*/
