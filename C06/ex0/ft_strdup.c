/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:52:37 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/09 15:29:26 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	tab = malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*tab;
	char	*tabb;

	tab = "sqlut";
	tabb = ft_strdup(tab);
	if (tabb == NULL)
		return (0);
	printf("%s\n", ft_strdup(tabb));
	free(tabb);
	return (0);
}*/
