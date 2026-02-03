/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:29:47 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 11:13:27 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (nb);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_recursive_factorial(1));
	return 0;
}*/		
