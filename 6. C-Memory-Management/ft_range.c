/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:39:23 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/24 13:47:23 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int main(void)
{
	int (min) = 1;
	int (max) = 10;
	int (*tab) = ft_range(min, max);
	int (i) = 0;
	
	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;	
	}
	printf("\n");
	free(tab);
	return (0);
}*/
