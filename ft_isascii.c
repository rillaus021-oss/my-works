/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:33:14 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 12:37:34 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return(1);
	else
		return(0);
}
/*
#include <stdio.h>
int	main(void)
{
	char c = 'k';
	char d = '!';
	if (ft_isascii(c))
		printf("ok");
	else
		printf("non");
	if (ft_isascii(d))
		printf("ok");
	else
		printf("non");
}*/