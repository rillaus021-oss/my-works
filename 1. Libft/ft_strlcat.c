/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:56:35 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/03 12:56:37 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	while (d < size && dst[d])
		d++;
	s = ft_strlen(src);
	if (d == size)
		return (size + s);
	i = 0;
	while (src[i] && d + i < size - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}

/*
#include <stdio.h>

int main(void)
{
	char src[] = "test";
	char dest[10] = "42";

	printf("%s\n", ft_strlcat(dest, src));
	return (0);
}*/