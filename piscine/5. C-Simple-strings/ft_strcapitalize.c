/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:05:01 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/20 13:46:07 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && j)
				str[i] = str[i] - 32;
			else if (str[i] >= 'A' && str[i] <= 'Z' && !j)
				str[i] = str[i] + 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "hello, how are you doing? 42words forty-two; fifty+and+one";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
