/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonnier <mmonnier@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:36:51 by mmonnier          #+#    #+#             */
/*   Updated: 2026/02/07 14:36:54 by mmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_duplicate(int n, int grid[4][4], int row, int col)
{
	int		count;
	int		rowtemp;

	count = 0;
	rowtemp = row;
	row = 0;
	while (count < 4)
	{
		if (n == grid[col][row])
			return (1);
		count++;
		row++;
	}
	row = rowtemp;
	col = 0;
	count = 0;
	while (count < 4)
	{
		if (n == grid[col][row])
			return (1);
		count++;
		col++;
	}
	return (0);
}

// int main()
// {
// 	int i;
// 	int j;

// 	i = 1;
// 	j = 1;
// 	int grid[4][4] = {{2,1,2,2}, {1,1,1,1}, {2,2,2,2}, {2,1,2,2}};
// 	printf("%d", is_duplicate(2, grid, i, j));
// }
