/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_in_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonnier <mmonnier@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:33:14 by mmonnier          #+#    #+#             */
/*   Updated: 2026/02/08 15:40:04 by mmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		validate_row(int *views, int **grid, int row);
int		validate_col(int *views, int **grid, int col);
int		is_duplicate(int n, int **grid, int row, int col);
void	print_tab(int **grid);

int	check_final_grid(int **grid)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (grid[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	checks(int *views, int **grid, int row, int col)
{
	if (!(grid[row][0] == 0 || grid[row][1] == 0
		|| grid[row][2] == 0 || grid[row][3] == 0))
	{
		if (!validate_row(views, grid, row))
		{
			return (0);
		}
	}
	if (!(grid[0][col] == 0 || grid[1][col] == 0
		|| grid[2][col] == 0 || grid[3][col] == 0))
	{
		if (!validate_col(views, grid, col))
		{
			return (0);
		}
	}
	return (1);
}

int	fill_recursive(int *views, int **grid, int index)
{
	int	row;
	int	col;
	int	nbtoplace;

	row = index / 4;
	col = index % 4;
	nbtoplace = 1;
	if (index == 16)
		return (1);
	while (nbtoplace <= 4)
	{
		grid[row][col] = nbtoplace;
		if (!is_duplicate(nbtoplace, grid, row, col))
		{
			if (checks(views, grid, row, col))
			{
				if (fill_recursive(views, grid, index + 1))
					return (1);
			}
		}
		grid[row][col] = 0;
		nbtoplace++;
	}
	return (0);
}

void	fill_grid(int *views, int **grid)
{
	int	index;

	index = 0;
	fill_recursive(views, grid, index);
}

void	fill_grid_zero(int *views)
{
	int	j;
	int	i;
	int	**grid;

	j = 0;
	i = 0;
	grid = malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		grid[i] = malloc(sizeof(int) * 4);
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	fill_grid(views, grid);
	if (check_final_grid(grid))
		print_tab(grid);
	else
		write(2, "Error\n", 6);
}
