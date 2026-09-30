/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:35 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/27 18:02:09 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_base(char *base);
int	ft_atoi_base(char *str, char *base, int b_len);

int	get_nbr_len(long nbr, int b_len)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= b_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(long nbr, char *base, int b_len)
{
	int		len;
	char	*str;

	len = get_nbr_len(nbr, b_len);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		str[0] = base[0];
	while (nbr > 0)
	{
		str[--len] = base[nbr % b_len];
		nbr /= b_len;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	len_from;
	int	len_to;
	int	val;

	if (nbr == NULL || base_from == NULL || base_to == NULL)
		return (NULL);
	len_from = check_base(base_from);
	len_to = check_base(base_to);
	if (len_from == 0 || len_to == 0)
		return (NULL);
	val = ft_atoi_base(nbr, base_from, len_from);
	return (ft_itoa_base(val, base_to, len_to));
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*ret;

	if (ac != 4)
		return (1);
	ret = ft_convert_base(av[1], av[2], av[3]);
	puts(ret);
	return (0);
}
*/
/*
int	main(void)
{
	printf("%s\n", ft_convert_base("42", "0123456789abcdef", "01"));
	return (0);
}*/
