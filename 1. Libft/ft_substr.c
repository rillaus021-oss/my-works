/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:55:58 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 21:45:30 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*tab;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	tab = malloc(len + 1);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
