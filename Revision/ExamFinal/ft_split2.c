/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:26:07 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/18 13:34:13 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char test, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == test)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			words++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (words);
}

char	*copy_words(char *str, char *charset)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], charset))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab_final;

	i = 0;
	j = 0;
	tab_final = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab_final)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			tab_final[j] = copy_words(&str[i], charset);
			j++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	tab_final[j] = '\0';
	return (tab_final);
}
/*
#include <stdio.h>

int	main(void)
{
	char **tab = ft_split("coucou moi c'est max", " ");
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("mot : %d %s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
