/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:53:43 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/12 17:39:21 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
		write(1, ", ", 2);
}

void	update_tab(int *tab, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0 && tab[i] == 9 - (n - 1 - i))
		i--;
	tab[i]++;
	while (i < n - 1)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (1)
	{
		print_tab(tab, n);
		if (tab[0] == 10 - n)
			return ;
		update_tab(tab, n);
	}
}

int	main(void)
{
	ft_print_combn(3);
}
