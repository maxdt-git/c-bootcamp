/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:46:10 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/09 18:11:21 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (range == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int     main(void)
{
        int     *tab;
	int	size;

        size = ft_ultimate_range(&tab, 5, 15);
        if (size <= 0)
                return (1);
        printf("%d\n", size);
        return (0);
}*/
