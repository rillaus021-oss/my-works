/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:51:45 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/15 20:07:57 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	*end;

	start = tab;
	end = tab + size - 1;
	while (start <= end)
	{
		ft_swap(start, end);
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;

	printf("Avant : \n");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Apres : \n");
        for (i = 0; i < size; i++)
                printf("%d ", tab[i]);
        printf("\n");

	return (0);
}*/
