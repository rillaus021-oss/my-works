/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:05:34 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/17 12:10:37 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("wdifheiwf"));
	printf("%d\n", ft_str_is_lowercase("wdiFRWeiwf"));
        printf("%d\n", ft_str_is_lowercase("461"));
        printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}*/
