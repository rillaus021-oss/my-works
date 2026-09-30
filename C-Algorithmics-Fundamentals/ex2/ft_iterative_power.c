/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:13:13 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/14 15:33:07 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if ((nb == 0) && (power == 0))
		return (1);
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	int n;
	int p;

	n = 2;
	p = 6;
	printf("%d\n", ft_iterative_power(n, p));
	return(0);
}*/
