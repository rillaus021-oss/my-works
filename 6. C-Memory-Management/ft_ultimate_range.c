/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:55:06 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/24 13:49:20 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int    main(void)
{
    int    *str;
    int    size;
    int    i;
    int	min;
    int	max;

    min = 1;
    max = 10;
    size = max - min;
    ft_ultimate_range(&str, min, max);
    i = 0;
    while (i < size)
    {
        printf("%d\n", str[i]);
        i++;
    }
    free(str);
    return (0);
}*/
