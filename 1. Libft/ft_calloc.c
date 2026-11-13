/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:54:11 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 20:30:43 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	p = malloc(n * size + (n == 0 || size == 0));
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}

/*
int main(void)
{
    int *p = ft_calloc(3, sizeof(int));
    if (!p)
        return (1);
    printf("%d %d %d\n", p[0], p[1], p[2]);
    free(p);
}
*/
