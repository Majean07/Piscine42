/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:25:24 by majean            #+#    #+#             */
/*   Updated: 2022/03/01 17:50:22 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(char digit)
{
	write(1, &digit, 1);
}

void	ft_print_combo(void)
{
	int	cent;
	int diz;
	int uni;

	cent = '0';
	while (cent <= '9')
	{
		diz = '0';
		while (diz <= '9')
		{
			uni = '0';
			while (uni <= '9')
			{
				ft_putdigit(cent);
				ft_putdigit(diz);
				ft_putdigit(uni);
				if (cent == '9' && diz == '9' && uni == '9')
					write(1, "\n", 1);
				else
					write(1, ", ", 2);
				uni++;
			}
			diz++;
		}
		cent++;
	}
}

int main()
{
	ft_print_combo();
}
