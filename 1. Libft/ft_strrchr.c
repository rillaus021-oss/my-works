/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:16:09 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/05 19:16:12 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    while (s[i])
        i++;
    while (i > 0)
    {    
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}
