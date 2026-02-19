/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:21:50 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/19 10:39:18 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		pos;
	int		total_len;
	int		sep_len;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	sep_len = ft_strlen(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	result = malloc(total_len + 1);
	if (!result)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[pos] = strs[i][j];
			pos++;
			j++;
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				result[pos] = sep[j];
				pos++;
				j++;
			}
		}
		i++;
	}
	result[pos] = '\0';
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char *tab[] = {"salut", "ca", "va"};
	printf("%s\n", ft_strjoin(3, tab, ", , "));

}

