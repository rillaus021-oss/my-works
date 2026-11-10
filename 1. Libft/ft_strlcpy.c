/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:52:25 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 13:05:57 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "Bonjour 42";
	char	destination[] = "vide";
	char	*retour;

	printf("Source      : %s\n", source);
	printf("Destination : %s\n", destination);
    retour = ft_strlcpy(destination, source);
	printf("Retour      : %s\n", retour);
	return (0);
}*/