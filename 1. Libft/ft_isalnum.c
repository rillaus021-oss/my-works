/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:21:45 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 12:28:00 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
int main(void)
{
	char c = 'A';
	char n = '5';
	if(ft_isalnum(c))
		printf("'%c' est alnum\n", c);
	else
		printf("'%c' n'est pas alnum\n", c);
	if(ft_isalnum(n))
                printf("'%c' est alnum\n", n);
        else
                printf("'%c' n'est pas qlnum\n", n);
	return(0);
}*/
