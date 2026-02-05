/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:45:58 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/05 16:51:54 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 5));
}*/
