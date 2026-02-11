/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:56:54 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/11 11:09:59 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
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
