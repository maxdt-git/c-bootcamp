/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:34:55 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/15 17:13:39 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + (size - 1) * ft_strlen(sep) + 1;
	return (total);
}

int	ft_concat(char *dst, char *src, int deb)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[deb + i] = src[i];
		i++;
	}
	return (deb + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*tab;

	if (size == 0)
	{
		tab = malloc(1);
		tab[size] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * (ft_total_length(size, strs, sep)));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		j = ft_concat(tab, strs[i], j);
		if (i < size - 1)
			j = ft_concat(tab, sep, j);
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char *tab[] = {""};
	printf("%s\n", ft_strjoin(0, tab, ", , ")); 

}*/
