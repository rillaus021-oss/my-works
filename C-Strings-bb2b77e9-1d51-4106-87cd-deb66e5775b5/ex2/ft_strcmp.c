/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:59:11 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/30 12:27:53 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonsoir";

	printf("Vrai strcmp : %d\n", strcmp(s1, s2));
	printf("ft_strcmp   : %d\n", ft_strcmp(s1, s2));

	printf("Cas identiques : %d\n", ft_strcmp("42", "42"));
	printf("Cas s1 plus long : %d\n", ft_strcmp("42abc", "42"));
	return (0);
}*/
