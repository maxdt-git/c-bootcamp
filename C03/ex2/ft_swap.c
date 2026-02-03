/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:13:39 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 18:18:49 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 6;
	printf("Avant swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Apres swap: x = %d, y = %d\n", x, y);
}*/
