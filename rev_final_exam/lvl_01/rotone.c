/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:19:03 by majean            #+#    #+#             */
/*   Updated: 2022/03/17 20:08:44 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;

	if (argc == 2)
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
			argv[1][i] += 1;
		if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
			argv[1][i] += 1;
		if (argv[1][i] == 'Z' || argv[1][i] == 'z')
			argv[1][i] -= 25;
		{
			write(1, &argv[1][i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
