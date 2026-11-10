/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:54:11 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/09 13:54:19 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t total;
    void *tab;

    if (size != 0 && count > SIZE_MAX / size)
        return (NULL);
    total = count * size;
    tab = malloc(total);
    if (tab == NULL)
        return (NULL);
    ft_bzero(tab, total);
    return (tab);
}
