/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:35:37 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/06 14:02:19 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int n)
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

void	ft_update_tab(int *tab, int n)
{
	int	i;

	i = n - 1;
	while (i >= 00 && tab[i] == 9 - (n - 1 - i))
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
	if (n <= 0 || n >= 9)
		return ;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (1)
	{
		ft_print_tab(tab, n);
		if (tab[0] == 10 - n)
			return ;
		ft_update_tab(tab, n);
	}
}

int	main(void)
{
	ft_print_combn(5);
}
