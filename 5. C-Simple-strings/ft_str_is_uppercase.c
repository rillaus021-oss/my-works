/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:11:42 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/17 16:16:10 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{       
        printf("%d\n", ft_str_is_lowercase("FDFRFG"));
        printf("%d\n", ft_str_is_lowercase("wdiFRWeiwf"));
        printf("%d\n", ft_str_is_lowercase("461"));
        printf("%d\n", ft_str_is_lowercase(""));
        return (0);
}*/
