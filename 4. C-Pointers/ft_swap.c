/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:45:33 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/15 18:07:44 by scahamad         ###   ########.fr       */
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
/*
int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;
	
	printf("var a etait : %d\n", a);
	printf("var b etait : %d\n", b);

	ft_swap(&a,&b);

	printf("var a est : %d\n", a);
	printf("var b est : %d\n", b);


	return (0);
}*/
