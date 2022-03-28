/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:08:05 by majean            #+#    #+#             */
/*   Updated: 2022/03/17 17:21:12 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_rev_print(char *str)
{
	int	i;
	int	l;

	i = 1;
	l = 0;
	while (str[l] != '\0')
		l++;
	while ((l - i) >= 0 )
	{
		ft_putchar(str[l - i] );
		i++;
	}
	return (str);
}
int     main(void) 
{
    ft_rev_print("rainbow dash");
    write(1, "\n", 1);
    return (0);
}
