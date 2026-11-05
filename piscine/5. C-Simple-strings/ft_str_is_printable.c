/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:17:01 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/17 12:24:36 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable(""));
        printf("%d\n", ft_str_is_printable("~"));
	printf("%d\n", ft_str_is_printable(" "));
        printf("%d\n", ft_str_is_printable("vgfref"));
        printf("%d\n", ft_str_is_printable("{}()#!"));
	return (0);
}*/
