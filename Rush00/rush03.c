/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majean <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:26:36 by majean            #+#    #+#             */
/*   Updated: 2022/03/01 16:21:37 by majean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(int x) // impression de la première ligne
{
	int	i;

	ft_putchar('A'); // print A
	i = 1; // donne à i la valeur de 1
	while (i < x - 1) // pendant que i est plus petit que
	{
		ft_putchar('B'); // print B
		i++; // incrémente i de 1
	}
	if (x != 1) // si x n'est pas 1
		ft_putchar('C'); // print C
	ft_putchar('\n'); // retour à la ligne
}

void	ft_print_body(int x, int y) // impression des lignes du milieu
{
	int	i;
	int	j;

	j = 1; // donne à j la valeur de 1
	while (j < y - 1) // pendant que j est plus peit que
	{
		ft_putchar('B'); // print B
		i = 1; // donne la valeur de 1 à i
		while (i < x - 1) // pendant que i est plus petit que
		{
			ft_putchar(' '); // print un espace vide
			i++; // incrémente i de 1
		}
		if (x != 1) // si x n'est pas 1
			ft_putchar('B'); // print B
		ft_putchar('\n'); // retour à la ligne
		j++; // incrémente j de 1
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0) // si x ou y est plus petit ou égal à 0
		return ; // retour (arrête le programme)
	ft_print_line(x); // utilise la fonction ft_print_line précédement programmer
	if (y != 1) // si y n'est pas 1
	{
		ft_print_body(x, y); // utilise la fonction ft_print_body précédemment programmer
		ft_print_line(x); // utilise la fonction ft_print_line précédemment programmer
	}
}

int	main(void) // programme d'exécution
{
	rush(5, 5); // donne les valeurs à x et y
	return (0); // retour à 0
}
