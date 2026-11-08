/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:23:32 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/04 18:23:37 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;
    size_t i;
    char *joined;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    if (len2 == SIZE_MAX || len1 > SIZE_MAX - len2 - 1)
        return (NULL);
    joined = malloc(len1 + len2 + 1);
    if (!joined)
        return (NULL);
    i = 0;
    while (i < len1)
    {
        joined[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < len2)
    {
        joined[len1 + i] = s2[i];
        i++;
    }
    joined[len1 + len2] = '\0';
    return (joined);
}
