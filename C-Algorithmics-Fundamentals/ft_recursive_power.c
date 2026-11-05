/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:39:31 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/14 16:03:58 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>

int	main(void)
{
	int	n;
	int	p;

	n = 2;
	p = 3;
	printf("%d\n", ft_recursive_power(n, p));
	return (0);
}*/	
