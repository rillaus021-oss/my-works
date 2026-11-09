/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:54:53 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/03 15:54:55 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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