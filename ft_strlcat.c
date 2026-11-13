/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:00:00 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 00:00:00 by scahamad         ###   ########.fr       */
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
	while (src[i] && i < size - d - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}

/*
** TEST RAPIDE : decommenter ce bloc pour tester cette fonction.
** Compiler ce fichier avec libft.a, sans inclure deux fois le meme .o.

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) { char dst[12] = "Bon"; size_t n = ft_strlcat(dst, "jour", sizeof(dst)); printf("dst: %s | retour: %zu\n", dst, n); return (0); }
*/
