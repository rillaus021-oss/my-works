/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:31:49 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/05 15:31:51 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return (&dest)
}