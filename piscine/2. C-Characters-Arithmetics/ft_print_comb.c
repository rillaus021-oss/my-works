/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:05:03 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/13 15:34:18 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = -1;
	while (++c <= 7)
	{
		d = c ;
		while (++d <= 8)
		{
			u = d;
			while (++u <= 9)
			{
				ft_putchar(c + '0');
				ft_putchar(d + '0');
				ft_putchar(u + '0');
				if (c < 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
