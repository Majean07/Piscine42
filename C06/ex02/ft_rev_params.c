/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:55:21 by majean            #+#    #+#             */
/*   Updated: 2022/03/17 10:34:05 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	ii;

	i = argc - 1;
	while (i > 0)
	{
		ii = 0;
		while (argv[i][ii] != '\0' && argc)
		{
			ft_putchar(argv[i][ii]);
			ii++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
