/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonnier <mmonnier@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:19:12 by mmonnier          #+#    #+#             */
/*   Updated: 2026/02/08 15:19:21 by mmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_view(int view, int grid[4])
{
	int	viewed;
	int	highest;
	int	i;

	viewed = 1;
	highest = grid[0];
	i = 0;
	while (i < 4)
	{
		if (grid[i] > highest)
		{
			highest = grid[i];
			viewed++;
		}
		i++;
	}
	if (viewed == view)
		return (1);
	return (0);
}

int	validate_col(int *views, int **grid, int col)
{
	int	reversegrid[4];
	int	col_grid[4];
	int	row;
	int	j;

	row = 0;
	j = 0;
	while (j < 4)
	{
		col_grid[j] = grid[j][col];
		reversegrid[j] = grid[3 - row][col];
		row++;
		j++;
	}
	if ((validate_view(views[col], col_grid)
			&& validate_view(views[col + 4], reversegrid)))
		return (1);
	return (0);
}

int	validate_row(int *views, int **grid, int row)
{
	int	reversegrid[4];

	reversegrid[0] = grid[row][3];
	reversegrid[1] = grid[row][2];
	reversegrid[2] = grid[row][1];
	reversegrid[3] = grid[row][0];
	if ((validate_view(views[row + 8], grid[row])
			&& validate_view(views[row + 12], reversegrid)))
		return (1);
	return (0);
}
