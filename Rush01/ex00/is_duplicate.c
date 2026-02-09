/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonnier <mmonnier@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:36:51 by mmonnier          #+#    #+#             */
/*   Updated: 2026/02/08 15:37:33 by jbrodusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_check(int **grid, int row, int coltemp, int n)
{
	int	col;
	int	count;

	col = 0;
	count = 0;
	while (count < 4)
	{
		if (n == grid[row][col] && col != coltemp)
			return (1);
		count++;
		col++;
	}
	return (0);
}

int	is_duplicate(int n, int **grid, int row, int col)
{
	int	count;
	int	rowtemp;
	int	coltemp;

	count = 0;
	rowtemp = row;
	coltemp = col;
	row = 0;
	while (count < 4)
	{
		if (n == grid[row][col] && row != rowtemp)
			return (1);
		count++;
		row++;
	}
	return (col_check(grid, rowtemp, coltemp, n));
}
