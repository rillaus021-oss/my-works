/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:42:10 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/02 11:56:10 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	if(ft_isalpha(c))
		printf("'%c' est une lettre\n", c);
	else
		printf("'%c' n'est pas une lettre\n", c);
	if(ft_isalpha(n))
                printf("'%d' est une lettre\n", n);
        else
                printf("'%d' n'est pas une lettre\n", n);
}
*/
