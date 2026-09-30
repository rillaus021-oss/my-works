/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:09:08 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/15 18:31:19 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int vdiv;
	int vmod;

	a = 50;
	b = 25;
	vdiv = 2;
	vmod = 0;

	ft_div_mod(a, b, &vdiv, &vmod);
	printf("div : %d\n", vdiv);
	printf("mod : %d\n", vmod);
	return (0);
}*/
