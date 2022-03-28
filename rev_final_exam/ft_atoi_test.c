/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:57:51 by majean            #+#    #+#             */
/*   Updated: 2022/03/17 18:31:00 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = (str[i] - '0') + (res * 10);
			i++;
		}
	}
	return (res * s);
}

int	main(void)
{
	printf("%d", ft_atoi("---+++3445555kdsf"));
	return (0);
}
