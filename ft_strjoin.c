/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:23:32 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/04 18:23:37 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	len_total(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	total += 1;
	return (total);
}

char	*ft_copy(char **strs, char *str, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0' )
			str[k++] = strs[i][j++];
		j = 0;
		while ((i < size - 1) && sep[j])
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	if (size <= 0)
	{
		join = malloc(sizeof(char));
		if (join == NULL)
			return (NULL);
		join[0] = '\0';
		return (join);
	}
	join = malloc(sizeof(char) * len_total(size, strs, sep));
	if (join == NULL)
		return (NULL);
	return (ft_copy(strs, join, size, sep));
}
/*
int	main(void)
{
	char	*str;
	char	*argv[4] =  {"ceci", "est", "tarpin", "dur"};
	str = ft_strjoin(4, argv, "--");
	printf("%s\n", str);
	return (0);
}*/
