/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:40:01 by majean            #+#    #+#             */
/*   Updated: 2022/03/16 12:36:33 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_rev_print(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = 0;

	while (str[len] != '\0')
		len++;
	while (i < len - 1)
	{
		temp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = temp;
		len--;
		i++;	
	}
	return (str);
}

int main(){
    char    str[8] = "bonjour";
    printf("%s", ft_rev_print(str));
}

