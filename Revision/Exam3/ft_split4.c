/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:15:11 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/13 13:32:45 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char test, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (test == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			word++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (word);
}

char	*copy_words(char *str, char *charset)
{
	char	*tab;
	int		i;

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
	char	**tab_final;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab_final = malloc(sizeof(char *) * (count_words(str, charset)));
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
