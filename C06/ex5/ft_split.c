/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:10:30 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/15 13:29:12 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char test, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (test == str[i])
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
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i] && !check_sep(str[i], charset))
		{
			words++;
			while (str[i] && !check_sep(str[i], charset))
				i++;
		}
	}
	return (words);
}

char	*copy_words(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !check_sep(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab_final;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	tab_final = malloc(sizeof(char *) * (count_words(str, charset)) + 1);
	if (!tab_final)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i] && !check_sep(str[i], charset))
		{
			tab_final[j] = copy_words(&str[i], charset);
			j++;
			while (str[i] && !check_sep(str[i], charset))
				i++;
		}
	}
	tab_final[j] = NULL;
	return (tab_final);
}
/*
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
}*/
