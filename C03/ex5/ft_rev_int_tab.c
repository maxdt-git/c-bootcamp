/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:59:03 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 19:11:10 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	int tab[5] = {1, 2, 3, 4, 5};
	i = 0;
	printf("Avant:\n");
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 5);
	printf("Apres:\n");
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
