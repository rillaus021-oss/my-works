/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:56:24 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 12:17:28 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	long n = c;
	if (n >= 0 && n <= 9)
		return(1);
	else
		return(0);
}
/*
#include <stdio.h>
int main(void)
{
	char c = 'E';
	int n = 5;
	if(ft_isdigit(c))
		printf("'%c' est un chiffre\n", c);
	else
		printf("'%c' n'est pas un chiffre\n", c);
	if(ft_isdigit(n))
                printf("'%d' est un chiffre\n", n);
        else
                printf("'%d' n'est pas un chiffre\n", n);
	return(0);
}*/
