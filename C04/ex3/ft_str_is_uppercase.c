/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 09:42:14 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/04 10:50:18 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= 'Z' && str[i] >= 'A')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        char *str;
        str = "ihdoi";
        printf("%d\n", ft_str_is_uppercase(str));
}*/
