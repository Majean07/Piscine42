/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:23:11 by majean            #+#    #+#             */
/*   Updated: 2022/03/16 12:15:31 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		else if (result >= 46341)
		{
			return (0);
		}
		result ++;
	}
	return (0);
}
