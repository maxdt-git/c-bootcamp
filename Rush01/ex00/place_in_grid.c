// 
// fill grid with 0
// row = 0, col = 0
// index = 0
// nb_to_place = 1
// 
// si index == 15 -> print()
//
// tant que row contient des 0
// |
// grid[col][row] = nb_to_place
// si is_duplicate -> nb_to place + 1; -> recursive(views[16], grid[4][4], index, nbtoplace)
// si nombre place -> index + 1; row +1 
// 
// quand row ne contient pas de 0;
// |
//  validate_row
// if validate ----> recursive col + 1; 
// else set all to 0; recursive nb_to_place = 2
#include <stdio.h>

int fill_row_zero(int grid[4][4], int row)
{
	int i;
	i = 0;

	while(i < 4)
	{
		grid[row][i] = 0;
		i++;
	}
}

int fill_recursive(int *views, int grid[4][4], int index, int nbtoplace)
{
	int row;
	int col;

	row = index / 4;
	col = index % 4;

	if(nbtoplace > 4)
		nbtoplace = 1;

	if(index == 16)
		printf("DONE");

	while(grid[row][0] == 0 || grid[row][1] == 0 || grid[row][2] == 0 || grid[row][3] == 0)
	{
		grid[row][col] = nbtoplace;
		if(is_duplicate())
		// faire tests ici // return 0 if false //
		col++;
		nbtoplace++;
	}
	if(!validate_row(views, grid, row))
		fill_recursive(views, grid, index + 1, nbtoplace);
}

int fill_grid(int *views, int grid[4][4])
{
	int index = 0;
	int nbtoplace = 1;
	fill_recursive(views, grid, index, nbtoplace);

}

int	fill_grid_zero(int *views)
{
	intj = 0;
	int  i = 0;
	int grid[4][4];

	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	fill_grid(views, grid);
}

int main()
{
	int views[16] = {1,2,3,1,2,3,1,1,1,1,1,1,1,1,1,1};
	fill_grid_zero(views);
}
