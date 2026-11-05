/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:03:10 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/05 19:03:12 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i], charset))
			i++;
		if (str[i] != '\0' && !is_sep(str[i], charset))
		{
			count++;
			while (str[i] != '\0' && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*copy_word(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] != '\0' && !is_sep(str[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char *c)
{
	char	**tab;
	int		i;
	int		j;

	if (s == NULL || c == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && is_sep(s[i], c))
			i++;
		if (s[i] != '\0' && !is_sep(s[i], c))
		{
			tab[j++] = copy_word(&s[i], c);
			while (s[i] != '\0' && !is_sep(s[i],c))
				i++;
		}
	}
	tab[j] = 0;
	return (tab);
}
/*
int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Bonjour", "on");
	if (tab == NULL)
		return (1);
	i = 0;
	while (tab[i] != 0)
	{
		printf("[%d] : %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
