/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:54:27 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/30 12:28:16 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "abcdef";
	char	*s2 = "abcxyz";

	printf("Vrai strncmp (3 car.) : %d\n", strncmp(s1, s2, 3));
	printf("ft_strncmp   (3 car.) : %d\n", ft_strncmp(s1, s2, 3));

	printf("Vrai strncmp (4 car.) : %d\n", strncmp(s1, s2, 4));
	printf("ft_strncmp   (4 car.) : %d\n", ft_strncmp(s1, s2, 4));

	printf("Cas n = 0             : %d\n", ft_strncmp(s1, s2, 0));
	return (0);
}*/
