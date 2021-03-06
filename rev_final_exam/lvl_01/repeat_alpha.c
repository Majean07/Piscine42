/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:09:40 by majean            #+#    #+#             */
/*   Updated: 2022/03/17 20:39:07 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int count;

	i = 0;
	count = 0;

	if (argc == 2)
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			count = argv[1][i] - 64;
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			count = argv[1][i] - 96;
		while (count)
		{
			write(1, &argv[1][i], 1);
			count--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
