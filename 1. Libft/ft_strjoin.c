/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:00:00 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 00:00:00 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	a;
	size_t	b;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	if (a > (size_t)-1 - b - 1)
		return (NULL);
	out = malloc(a + b + 1);
	if (!out)
		return (NULL);
	ft_memcpy(out, s1, a);
	ft_memcpy(out + a, s2, b + 1);
	return (out);
}

/*
** TEST RAPIDE : decommenter ce bloc pour tester cette fonction.
** Compiler ce fichier avec libft.a, sans inclure deux fois le meme .o.

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) { char *s = ft_strjoin("Bon", "jour"); if (!s) return (1); printf("%s\n", s); free(s); return (0); }
*/
