/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:24:17 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/27 14:26:47 by scahamad         ###   ########.fr       */
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
	if (word == NULL)
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	if (str == NULL || charset == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i], charset))
			i++;
		if (str[i] != '\0' && !is_sep(str[i], charset))
		{
			tab[j++] = copy_word(&str[i], charset);
			while (str[i] != '\0' && !is_sep(str[i], charset))
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
