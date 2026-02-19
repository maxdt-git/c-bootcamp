/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:51:25 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/16 15:07:41 by mde-nas          ###   ########.fr       */
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

char	*copy_word(char *str, char *charset)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i] && is_sep(str[i], charset))
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
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_words(str, charset)));
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			tab[j] = copy_word(&str[i], charset);
			j++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	tab[j] = '\0';
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char	**tab;
	int	i;

	i = 0;
	tab = ft_split("Salut, moi c'est Max", " ,");
	if (!tab)
		return (0);
	while (tab[i])
	{
		printf("Mot %d : %s\n", i, tab[i]);
		i++;
	}
}
