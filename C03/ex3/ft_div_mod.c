/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:41:16 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 18:49:55 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 20;
	b = 6;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d\n", a, b);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);

	return(0);
}*/
