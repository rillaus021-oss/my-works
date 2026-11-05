/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:47:46 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 12:52:16 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return(i);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Bonjour";
	printf("Nombre de ch dans Bonjour: ");
	printf("%d\n", ft_strlen(str));

	char str2[] = "Ceci est un message";
	printf("Nombre de ch dans phrase: ");
        printf("%d\n", ft_strlen(str2));
	return (0);
}
*/
