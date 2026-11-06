/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:41:06 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/06 16:41:08 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memchr(const void s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *p;
    p = (unsigned char*)s;
    while (i < n)
    {
        if (p[i] == (char)c)
            return ((char *)&p[i]);
        i++;
    }
    if (p[i] == (char)c)
            return ((char *)&p[i]);
    return (NULL);
}