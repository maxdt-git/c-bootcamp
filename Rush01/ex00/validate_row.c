/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonnier <mmonnier@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:50:14 by mmonnier          #+#    #+#             */
/*   Updated: 2026/02/07 13:50:16 by mmonnier         ###   ########.fr       */
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

int	validate_row(int *views, int grid[4][4], int i)
{
	int		reversegrid[4];

	reversegrid[0] = grid[i][3];
	reversegrid[1] = grid[i][2];
	reversegrid[2] = grid[i][1];
	reversegrid[3] = grid[i][0];
	if (validate_view(views[i + 8], grid[i])
		&& validate_view(views[i + 12], reversegrid))
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
