/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:52:02 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/10 15:52:04 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *tab;
    unsigned int    i;

    if (!s || !f)
        return (NULL);
    tab = malloc(ft_strlen(s) + 1);
    if (!tab)
        return (NULL);
    i = 0;
    while (s[i])
    {
        tab[i] = f(i, s[i]);
        i++;
    }
    tab[i] = '\0';
    return (tab);
}
