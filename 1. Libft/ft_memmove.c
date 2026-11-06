/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:46:23 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/05 15:46:26 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    if (dest < src)
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            ((unsigned char *)dest)[i-1] = ((unsigned char *)src)[i-1];
            i--;
        }
    }
    return (dest);
}
