typedef struct puzzle
{
	int		size;
	int		*input_array;
	int		**array;
}			t_puzzle;

void		ft_put(char *c);
int			ft_count_digits(char *inp);
int			*ft_input_arr(char *input, int digits);
int			**ft_create_array(int size);
int			ft_solve(t_puzzle *puzzle, int row, int col);
void		print_array(int **array, int size);
void		ft_free_array(int **array, int size);

t_puzzle	init_puzzle(char *input, int digit_count)
{
	t_puzzle	puzzle;

	puzzle.size = digit_count / 4;
	puzzle.input_array = ft_input_arr(input, digit_count);
	puzzle.array = ft_create_array(puzzle.size);
	return (puzzle);
}

int	main(int argc, char *argv[])
{
	int			digit_count;
	t_puzzle	puzzle;

	if (argc != 2)
	{
		ft_put("Error\n");
		return (1);
	}
	digit_count = ft_count_digits(argv[1]);
	if (digit_count == -1)
		return (1);
	else if (digit_count % 4 != 0 && digit_count / 4 >= 1 && digit_count
		/ 4 <= 9)
	{
		ft_put("Error\n");
		return (1);
	}
	puzzle = init_puzzle(argv[1], digit_count);
	if (ft_solve(&puzzle, 0, 0))
		print_array(puzzle.array, puzzle.size);
	else
		ft_put("Error\n");
	ft_free_array(puzzle.array, puzzle.size);
	return (0);
}
