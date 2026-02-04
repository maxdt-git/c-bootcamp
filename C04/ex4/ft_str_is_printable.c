/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:07:11 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/04 14:29:38 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= '~' && str[i] >= ' ')))
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
        str = "";
        printf("%d\n", ft_str_is_printable(str));
}*/
