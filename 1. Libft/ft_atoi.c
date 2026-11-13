/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:00:40 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/03 16:00:43 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	nb;
	int		sign;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return ((int)(nb * sign));
}
/*

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) { printf("%d | %d | %d\n", ft_atoi("42"), 
ft_atoi("  -123abc"), ft_atoi("+7")); return (0); }
*/
