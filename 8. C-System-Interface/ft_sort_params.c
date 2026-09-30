/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:13:22 by scahamad          #+#    #+#             */
/*   Updated: 2026/09/30 22:32:39 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	c;

	i = 1;
	j = 0;
	(void)argc;
	while (argv[i])
	{
		if (argv[i] > argv[i+1])
		{
			ft_swap(argv[i], argv[i+1]);
			while (argv[i][j])
			{
				c = argv[i][j];
				write(1, &c, 1);
				j++;
			}
			j = 0;
			write(1, "\n", 1);
		}
		else
		{
			while (argv[i][j])
                        {
                                c = argv[i][j];
                                write(1, &c, 1);
                                j++;
                        }
                        j = 0;
                        write(1, "\n", 1);
		}
		i++;
	}
}

