/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:10:30 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/11 18:40:37 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *charset, char test)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (test == charset[i])
			return (1);
		i++
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count_sep;
	
	i = 0;
	while (str[i])
	{
		if (check_sep(str, charset))
			count_sep++;
		i++;
	}
	return (count_sep + 1);
}

void	**ft_split(char *str, char *charset)
{
	char	**tab_final;

	if (!str)
		return (NULL);
	*tab_final = malloc(sizeof(char *) * (count_words(str, charset)) + 1);
	if (!tab_final)
		return (NULL);


