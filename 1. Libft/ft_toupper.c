/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:22:34 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/04 17:22:35 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	*ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	c
	[] = "TeeSt42";

	ft_toupper(c
	);
	printf("%s\n", str);
	return (0);
}*/