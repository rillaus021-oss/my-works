/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:45:02 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 12:47:22 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char c = 'k';
	char d = '!';
	if (ft_isprint(c))
		printf("ok");
	else
		printf("non");
	if (ft_isprint(d))
		printf("ok");
	else
		printf("non");
}*/