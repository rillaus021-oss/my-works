/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:34:13 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/14 15:11:06 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*#include <stdio.h>
int	main(void)
{
	int nb;
	nb = 15;	

	printf("%d\n",ft_recursive_factorial(nb));
	return (0);
}*/
