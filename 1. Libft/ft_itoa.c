/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:58:52 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 21:54:04 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chars(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (n < 0)
	{
		nb = -nb;
		count++;
	}
	if (n == 0)
		count = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		count;
	char	*tab;

	nb = n;
	count = count_chars(n);
	tab = malloc(count + 1);
	if (!tab)
		return (NULL);
	tab[count] = '\0';
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		tab[0] = '0';
	while (nb > 0)
	{
		count--;
		tab[count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (tab);
}
/*
int main(void)
{
    char *s = ft_itoa(INT_MIN);
    if (!s)
        return (1);
    printf("%s\n", s);
    free(s);
}*/
