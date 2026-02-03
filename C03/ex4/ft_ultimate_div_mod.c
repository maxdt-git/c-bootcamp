/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:48:21 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 19:10:22 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 20;
	y = 6;
	printf("Avant: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Apres: x = %d, y = %d\n", x, y);
	return (0);
}*/
