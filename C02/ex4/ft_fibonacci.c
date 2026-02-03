/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:39:31 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/02 12:58:58 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(15));
}*/
