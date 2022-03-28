/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:36:47 by majean            #+#    #+#             */
/*   Updated: 2022/03/17 19:27:32 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

int	main(void)
{
	char    a[50] = " ---+--+1234ab567";
	char    b[50] = "++1 2OPSHJKFBJNDBLJVWK";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);

	printf("\nValue a: %d\n", ft_atoi(a));
	printf("Value b: %d\n", ft_atoi(b));
}

