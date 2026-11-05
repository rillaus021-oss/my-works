/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:02:57 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/14 17:38:34 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*#include <stdio.h> 
int	main(void)
{
	int	nb;
	nb = -5;
	printf("%d\n", ft_iterative_factorial(nb));
}*/
