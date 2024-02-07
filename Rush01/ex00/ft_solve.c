typedef struct puzzle
{
	int	size;
	int	*input_array;
	int	**array;
}		t_puzzle;

int		is_valid(int **array, int *clues, int size);
void	ft_put(char *c);
void	print_array(int **array, int size);
int		ft_solve(t_puzzle *puzzle, int row, int col);

int	is_height_in_row(int **array, int row, int height, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[row][i] == height)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	is_height_in_col(int **array, int col, int height, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i][col] == height)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	try_place_height(t_puzzle *puzzle, int row, int col, int height)
{
	int	next_row;
	int	next_col;

	if (!is_height_in_row(puzzle->array, row, height, puzzle->size)
		&& !is_height_in_col(puzzle->array, col, height, puzzle->size))
	{
		puzzle->array[row][col] = height;
		if (col == puzzle->size - 1)
		{
			next_row = row + 1;
			next_col = 0;
		}
		else
		{
			next_row = row;
			next_col = col + 1;
		}
		if (ft_solve(puzzle, next_row, next_col))
		{
			return (1);
		}
		puzzle->array[row][col] = 0;
	}
	return (0);
}

int	ft_solve(t_puzzle *puzzle, int row, int col)
{
	int	height;

	if (row == puzzle->size)
	{
		return (is_valid(puzzle->array, puzzle->input_array, puzzle->size));
	}
	height = 1;
	while (height <= puzzle->size)
	{
		if (try_place_height(puzzle, row, col, height))
		{
			return (1);
		}
		height++;
	}
	return (0);
}
