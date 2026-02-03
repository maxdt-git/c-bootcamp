/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:06:25 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 15:09:42 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	if (nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 5));
}*/
