/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:12:02 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/05 14:23:16 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb)
{
	char	a;
	char	b;

	a = nb / 10;
	b = nb % 10;
	ft_putchar(a + '0');
	ft_putchar(b + '0');
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
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
