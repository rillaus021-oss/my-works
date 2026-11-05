/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:06:02 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 13:37:20 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "Bonjour";
    printf("Avant : %s\n", str);
    ft_memset(str, 'A', 3);
    printf("Après : %s\n", str);
    return (0);
}*/