/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrodusc <jbrodusc@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:39:39 by jbrodusc          #+#    #+#             */
/*   Updated: 2026/02/07 16:10:44 by jbrodusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// Check if the argument is valid
int	check_arg(char *arg)
{
	int	i;

	if (ft_strlen(arg) != 31)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0 && (arg[i] < '1' || arg[i] > '4'))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (i % 2 == 1 && arg[i] != ' ')
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

// Convert the argument into a tab of integer
int	*convert_arg(char *arg)
{
	int	*tab;
	int	i;
	int	j;

	tab = malloc(sizeof (int) * 16);
	i = 0;
	j = 0;
	while (arg[i])
	{
		if (i % 2 == 0)
		{
			tab[j] = arg[i] - '0';
			j++;
		}
		i++;
	}
	return (tab);
}

// Check if the grid has a solution
int	check_views(int *views)
{
	int	i;

	i = 0;
	while (i < 12)
	{
		if (((views[i] + views[i + 4]) < 3) || ((views[i] + views[i + 4]) > 5))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	*views;

	if (argc != 2 || check_arg(argv[1]) != 1)
		return (1);
	views = convert_arg(argv[1]);
	if (check_views(views) != 1)
		return (1);
	return (0);
}
