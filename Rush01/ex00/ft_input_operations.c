#include <stdio.h>
#include <stdlib.h>

void	ft_put(char *c);

int	ft_count_digits(char *input)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (*input)
	{
		if ((i % 2 == 0 && (*input < '0' || *input > '9')) || (i % 2 != 0
				&& *input != ' '))
		{
			ft_put("Error\n");
			return (-1);
		}
		if (i % 2 == 0 && *input >= '0' && *input <= '9')
			counter++;
		input++;
		i++;
	}
	input -= i;
	if (input[i - 1] == ' ')
	{
		ft_put("Error\n");
		return (-1);
	}
	return (counter);
}

int	*ft_input_arr(char *input, int digits)
{
	int	i;
	int	j;
	int	*array;

	array = (int *)malloc(digits * 4);
	i = 0;
	j = 0;
	while (*input && j < digits)
	{
		if (*input >= '0' && *input <= '9')
		{
			array[j] = *input - '0';
			j++;
		}
		input++;
	}
	return (array);
}
