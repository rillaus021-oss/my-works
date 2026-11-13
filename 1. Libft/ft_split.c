/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:00:00 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 00:00:00 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	ft_free_words(char **tab, size_t n)
{
	while (n > 0)
		free(tab[--n]);
	free(tab);
}

static char	*ft_next_word(char const **s, char c)
{
	char const	*start;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	return (ft_substr(start, 0, *s - start));
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	count;
	size_t	i;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < count)
	{
		tab[i] = ft_next_word(&s, c);
		if (!tab[i])
			return (ft_free_words(tab, i), NULL);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
