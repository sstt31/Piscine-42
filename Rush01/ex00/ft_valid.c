void	ft_put(char *c);

int	is_valid_left(int **array, int *clues, int size)
{
	int	i;
	int	j;
	int	visible_tower;
	int	count;

	i = 0;
	while (i < size)
	{
		visible_tower = 0;
		count = 0;
		j = 0;
		while (j < size)
		{
			if (array[i][j] > visible_tower)
			{
				visible_tower = array[i][j];
				count++;
			}
			j++;
		}
		if (count != clues[i + size * 2])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_right(int **array, int *clues, int size)
{
	int	i;
	int	j;
	int	visible_tower;
	int	count;

	i = 0;
	while (i < size)
	{
		visible_tower = 0;
		count = 0;
		j = size - 1;
		while (j >= 0)
		{
			if (array[i][j] > visible_tower)
			{
				visible_tower = array[i][j];
				count++;
			}
			j--;
		}
		if (count != clues[i + size * 3])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_top(int **array, int *clues, int size)
{
	int	i;
	int	j;
	int	visible_tower;
	int	count;

	i = 0;
	while (i < size)
	{
		visible_tower = 0;
		count = 0;
		j = 0;
		while (j < size)
		{
			if (array[j][i] > visible_tower)
			{
				visible_tower = array[j][i];
				count++;
			}
			j++;
		}
		if (count != clues[i])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_bottom(int **array, int *clues, int size)
{
	int	i;
	int	j;
	int	visible_tower;
	int	count;

	i = 0;
	while (i < size)
	{
		visible_tower = 0;
		count = 0;
		j = size - 1;
		while (j >= 0)
		{
			if (array[j][i] > visible_tower)
			{
				visible_tower = array[j][i];
				count++;
			}
			j--;
		}
		if (count != clues[i + size])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(int **array, int *clues, int size)
{
	return (is_valid_left(array, clues, size) && is_valid_right(array, clues,
			size) && is_valid_top(array, clues, size) && is_valid_bottom(array,
			clues, size));
}
