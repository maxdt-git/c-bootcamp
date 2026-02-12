/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:22:26 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/12 16:39:19 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (a == charset[i])
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
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab_final;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	tab_final = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab_final)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			tab_final[j] = copy_word(&str[i], charset);
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

int     main(void)
{
        char    **tab;
        int     i;

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
