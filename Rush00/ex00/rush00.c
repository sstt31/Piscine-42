void	ft_print(int x, char start, char mid, char end);

void	print_pattern(int i, int cols, int rows, char **pattern_chars)
{
	if (i == 1)
	{
		ft_print(rows, pattern_chars[0][0], pattern_chars[0][1],
			pattern_chars[0][2]);
	}
	else if (i == cols)
	{
		ft_print(rows, pattern_chars[2][0], pattern_chars[2][1],
			pattern_chars[2][2]);
	}
	else
	{
		ft_print(rows, pattern_chars[1][0], pattern_chars[1][1],
			pattern_chars[1][2]);
	}
}

void	rush(int x, int y)
{
	int		i;
	char	*pattern_chars[9];

	pattern_chars[0] = "o-o";
	pattern_chars[1] = "| |";
	pattern_chars[2] = "o-o";
	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			print_pattern(i, y, x, pattern_chars);
			i++;
		}
	}
}
