#include <stdlib.h>
#include <unistd.h>

void	ft_put(char *c);

void	print_array(int **array, int size)
{
	int		i;
	int		j;
	char	numb;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			numb = array[i][j] + '0';
			write(1, &numb, 1);
			j++;
		}
		ft_put("\n");
		i++;
	}
}

void	ft_free_array(int **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	**ft_create_array(int size)
{
	int	**array;
	int	i;
	int	j;

	array = (int **)malloc(8 * size);
	i = 0;
	while (i < size)
	{
		array[i] = (int *)malloc(4 * size);
		if (!array[i])
		{
			ft_free_array(array, i);
		}
		j = 0;
		while (j < size)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
