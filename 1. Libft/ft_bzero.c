/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:31:42 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/03 12:31:46 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void ft_bzero(void *s, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "Bonjour";
    printf("Avant : %s\n", str);
    ft_bzero(str, 1);
    printf("Après : %s\n", str);
    return (0);
}*/
