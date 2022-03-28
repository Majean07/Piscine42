/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_prin_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:12:53 by majean            #+#    #+#             */
/*   Updated: 2022/03/18 09:29:23 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
	int	l;

	i = 1;
	l = 0;
	while (str[l] != '\0')
		l++;
	while ((l - i) >= 0)
	{
		write(1, &str[l - i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(void)
{
	ft_rev_print("moulinette");
	return (0);
}
