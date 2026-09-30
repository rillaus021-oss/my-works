/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:05:03 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/14 11:46:25 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	d;
	int	u;

	d = 0;
	while (d <= 98)
	{
		u = d + 1;
		while (u <= 99)
		{
			ft_putchar((d / 10) + '0');
			ft_putchar((d % 10) + '0');
			ft_putchar(' ');
			ft_putchar((u / 10) + '0');
			ft_putchar((u % 10) + '0');
			if (d != 98 || u != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			u++;
		}
		d++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
