/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:18:10 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/17 11:37:20 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_alpha("Bonjour"));
	printf("%d\n", ft_str_is_alpha("Bon42jour"));
	printf("%d\n", ft_str_is_alpha("42"));
	printf("%d\n", ft_str_is_alpha(""));
	return(0);
}*/
