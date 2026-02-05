/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:52:09 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/05 16:55:48 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		index = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
		return (index);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(15));
}*/
