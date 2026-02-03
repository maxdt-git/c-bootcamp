/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:42:20 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 14:58:40 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbnb;

	nbnb = (nb - 1);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nbnb > 0)
	{
		nb = (nb * nbnb);
		nbnb--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0) ;
}*/
