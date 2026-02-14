/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:46:49 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/10 18:12:23 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	rtr;
	int	sign;
	int	i;

	i = 0;
	rtr = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rtr = (rtr * 10) + (str[i] - '0');
		i++;
	}
	return (sign * rtr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	str = "  --+-1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
