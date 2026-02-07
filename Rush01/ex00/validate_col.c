/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonnier <mmonnier@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:50:14 by mmonnier          #+#    #+#             */
/*   Updated: 2026/02/07 15:02:38 by jbrodusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_view(int view, int grid[4])
{
	int		viewed;
	int		highest;
	int		i;

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

int	validate_col(int *views, int grid[4][4], int col)
{
	int		reversegrid[4];
	int		col_grid[4];
	int		row;
	int		j;

	row = 0;
	j = 0;
	while (idx < 4)
	{
		col_grid[j] = grid[idx][col];
		reversegrid[j] = grid[3 - row][col];
		row++;
		j++;
	}
	if (validate_view(views[col], col_grid)
		&& validate_view(views[col + 4], reversegrid))
		return (1);
	return (0);
}

// int main()
// {
// 	int i;
// 	i = 0;
// 	int views[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2};
// 	int grid[4][4] = {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
// 	printf("\n%d", validate_row(views, grid, i));
// }
