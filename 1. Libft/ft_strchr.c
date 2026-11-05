/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:02:53 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/03 13:02:55 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char * ft_strchr(const char *str, int c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        else
            i++;
    }
    return(NULL);
}
