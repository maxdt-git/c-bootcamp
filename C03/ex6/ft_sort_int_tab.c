/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:06:59 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/03 11:23:27 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}

/*
#include <stdio.h>
#include <unistd.h>

void	print_tab(int *tab, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	write(1, "\n", 1);
}


int	main(void)
{
	int tab[7] = {5, 2, 8, 3, 6, 9, 5};
	int size = 7;

	printf("Avant tri: ");
	print_tab(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Apres tri: ");
	print_tab(tab, size);
	return 0;
}*/
