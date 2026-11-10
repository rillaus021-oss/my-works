/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:58:52 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/09 14:58:53 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int count_chars(int n)
{
    long    nb;
    int     count;

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

char *ft_itoa(int n)
{
    long    nb;
    int count;
    char    *tab;

    nb = n;
    count = count_chars(n);
    tab = malloc(sizeof(int) * count + 1);
    if (!tab)
        return (NULL);
    tab[count] = '\0';
    while (count > 0)
    {
        tab[count] = (nb % 10) + '0';
        count--;
        if (n < 0)
            tab[0] = '-';
    }
    return (tab);
}
