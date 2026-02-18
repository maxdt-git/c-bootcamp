/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:26:23 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/18 17:01:24 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(int n)
{
	char	*base_hexa;
	char	c;
	
	base_hexa = "0123456789abcdef";
	if (n >= 16)
		ft_hexa(n / 16);
	c = base_hexa[n % 16];
	ft_putchar(c);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] >= '0' && av[1][i] <= '9')
		{
			n = n * 10 + (av[1][i] - '0');
			i++;
		}
	}
	ft_hexa(n);
	ft_putchar('\n');
	return (0);
}
