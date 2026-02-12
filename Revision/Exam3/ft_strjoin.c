/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:58:38 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/12 16:40:18 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

int	total(int size, char **strs, char *sep)
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

void	ft_concat(char *dst, char *src, int *k)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[(*k)++] = src[i];
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*tab;

	i = 0;
	k = 0;
	if (size == 0)
		return (malloc(1));
	tab = malloc(sizeof(char) * (total(size, strs, sep)));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		ft_concat(tab, strs[i], &k);
		if (i < size - 1)
			ft_concat(tab, sep, &k);
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int     main(void)
{
        char *tab[] = {"Coucou", "ca va", "ouais et toi"};
        printf("%s\n", ft_strjoin(3, tab, ", , "));

}*/
