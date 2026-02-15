/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:59:34 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/15 13:19:31 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base_return_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	base_pos(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	atoi_base(char *nbr, char *base_from, int base_len)
{
	int	i;
	int	sign;
	int	result;
	int	pos;

	i = 0;
	sign = 1;
	result = 0;
	while (nbr[i] == ' ' || (nbr[i] >= '\t' && nbr[i] <= '\r'))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nbr[i])
	{
		pos = base_pos(nbr[i], base_from);
		result = (result * base_len) + pos;
		i++;
	}
	return (result * sign);
}
