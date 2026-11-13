/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:00:00 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 00:00:00 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digits(long n)
{
	size_t	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*out;

	nb = n;
	len = ft_digits(nb);
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	if (nb < 0)
	{
		out[0] = '-';
		nb = -nb;
	}
	while (len > (size_t)(n < 0))
	{
		out[--len] = (char)('0' + nb % 10);
		nb /= 10;
	}
	return (out);
}
