/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:10:30 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/12 11:44:13 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *str, char test)
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
		if (!check_sep(str[i], charset) && (i == 0 || check_sep([stri - 1], charset)))
			words++;
		i++;
	}
	return (words);
}

char	*copy_words(char *str)
{
	char	*word;
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !check_sep(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
		
void	**ft_split(char *str, char *charset)
{
	char	**tab_final;
	int	i;
	int	j;

	if (!str)
		return (NULL);
	tab_final = malloc(sizeof(char *) * (count_words(str, charset)) + 1);
	if (!tab_final)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && check_sep(str[i], charset))
		i++;
	if (str[i] && !check_sep(str[i], charset))
	{
		tab_final = copy_words(str[i]);
		i++;
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	tab_final[i] = '\0';
	return (tab_final);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char **arr;

 	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
 	arr = ft_split(phrase);
 	printf("%s\n", arr[0]);
 	printf("%s\n", arr[1]);
 	printf("%s\n", arr[2]);
 	printf("%s\n", arr[3]);
 }
