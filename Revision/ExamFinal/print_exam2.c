/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_exam2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:15:16 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/18 18:05:30 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{
		if (i != 0 && i % 3 == 2 && i % 5 == 4)
			ft_putchar('8');
		else if (i != 0 && i % 3 == 2)
			ft_putchar('3');
		else if (i != 0 && i % 5 == 4)
			ft_putchar('5');
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
