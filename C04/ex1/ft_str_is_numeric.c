/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:20:33 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/03 18:59:06 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= 57 && str[i] >= 48)))
			return (0);
		i++;
	}
	return(1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str;
	str = "15478i2";
	printf("%d\n", ft_str_is_numeric(str));
}*/
