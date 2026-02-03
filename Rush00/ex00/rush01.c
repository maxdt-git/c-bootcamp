/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:15:33 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/01 15:15:38 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_first_line(int colonne)
{
	int	a;

	a = 1;
	while (a <= colonne)
	{
		if (a == 1)
			ft_putchar('/');
		else if (colonne == a)
			ft_putchar('\\');
		else
			ft_putchar('*');
		a++;
	}
	ft_putchar('\n');
}

void	ft_print_line(int colonne)
{
	int	a;

	a = 1;
	while (a <= colonne)
	{
		if (a == 1)
			ft_putchar('*');
		else if (a == colonne)
			ft_putchar('*');
		else
			ft_putchar(' ');
		a++;
	}
	ft_putchar('\n');
}

void	ft_print_last_line(int colonne)
{
	int	a;

	a = 1;
	while (a <= colonne)
	{
		if (a == 1)
			ft_putchar('\\');
		else if (colonne == a)
			ft_putchar('/');
		else
			ft_putchar('*');
		a++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	a;
	int	max_x;
	int	max_y;

	a = 1;
	max_x = 60;
	max_y = 60;
	if (x <= 0 || y <= 0)
		return ;
	if (x >= max_x || y >= max_y)
		return ;
	while (a <= y)
	{
		if (a == 1)
			ft_print_first_line(x);
		else if (a == y)
			ft_print_last_line(x);
		else
			ft_print_line(x);
		a++;
	}
}
