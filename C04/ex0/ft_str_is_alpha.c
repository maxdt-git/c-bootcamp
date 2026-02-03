/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:20:33 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/03 18:46:26 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] <= 122 && str[i] >= 97) || (str[i] <= 90 && str[i] >= 64)))
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
	str = "kshckqei";
	printf("%d\n", ft_str_is_alpha(str));
}*/
