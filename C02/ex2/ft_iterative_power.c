/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:43:17 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 15:01:24 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbnb;

	nbnb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (power > 1)
	{
		nb = nbnb * nb;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_power(0, 5));
}*/
