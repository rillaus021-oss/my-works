/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:43:09 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/15 18:50:42 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 50;
	b = 25;

	printf("var a etait : %d\n", a);
	printf("var b etait : %d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("var a est : %d\n", a);
	printf("var b est : %d\n", b);

	return (0);
}*/
