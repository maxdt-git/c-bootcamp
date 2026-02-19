/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:06:27 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/19 16:24:41 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[i])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(int ac, char **av)
{
	int	i;
	char	*tab[300];

	i = 0;
	if (argv != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_strcat(tab, av[1]);
	ft_strcat(tab, av[2]);
