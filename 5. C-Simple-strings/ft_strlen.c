/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:59:05 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/17 14:19:10 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}
/*
int	main(void)
{
	char str[] = "Bonjour";
	printf("Nombre de ch dans Bonjour");
	printf("%d\n", ft_strlen(str));

	char str2[] = "Ceci est un message";
	printf("Nombre de ch dans phrase");
        printf("%d\n", ft_strlen(str2));
	return (0);
}*/
