/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:26:01 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/09 11:04:12 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int    is_not_empty(char *str)
{
    return (str[0] != '\0');
}

int    main(void)
{
    char    *tab[] = {"salut", "", "coucou"};
    int     result;

    result = ft_count_if(tab, 3, &is_not_empty);
    printf("%d\n", result);
    return (0);
}*/
