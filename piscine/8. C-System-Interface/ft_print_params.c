/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:00:46 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/30 21:32:49 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 0;
	(void)argc;
	while (argv[i])
	{
		while (argv[i][j])
		{
			c = argv[i][j];
			write(1, &c, 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}
