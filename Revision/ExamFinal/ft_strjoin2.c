/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:06:13 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/19 11:21:52 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;
	int	total_len;
	int	sep_len;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	sep_len = ft_strlen(sep);
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	result = malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	pos = 0;
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

int     main(void)
{
        char *tab[] = {"salut", "ca", "va"};
        printf("%s\n", ft_strjoin(3, tab, ", , "));

}

