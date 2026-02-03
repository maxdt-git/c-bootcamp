/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 08:49:05 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/01 12:21:31 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a)
{
	char	x;
	char	y;

	x = a / 10;
	y = a % 10;
	ft_putchar(x + '0');
	ft_putchar(y + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			ft_putchar(' ');
			ft_print(b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb2();
	return 0;
}
*/
