/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:50:43 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/29 12:53:48 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[20] = "XXXXXXXXXXXXXXXXXXX";

	ft_strncpy(dest, "Bonjour", 10);
	printf("Dest : %s\n", dest);
	// dest[7], dest[8] et dest[9] valent bien '\0'
	printf("Car à idx 8 : '%c' (valeur ascii: %d)\n", dest[8], dest[8]);
	return (0);
}*/
