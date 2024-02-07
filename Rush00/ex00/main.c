#include <unistd.h>

void	rush(int x, int y);

int	get_number(char *str, int min_nb, int max_nb)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] > max_nb + 48 || str[i] < min_nb + 48)
		{
			return (-1);
		}
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

void	validate_args(char **args, int *x, int *y)
{
	if (args[1])
	{
		*x = get_number(args[1], 0, 9);
	}
	if (args[2])
	{
		*y = get_number(args[2], 0, 9);
	}
}

int	main(int nb, char **args)
{
	int	x;
	int	y;

	x = 3;
	y = 3;
	if (nb > 1)
	{
		validate_args(args, &x, &y);
	}
	if (x < 0 || y < 0)
	{
		write(1, "Use Format: ./rush0X <x: positive int> <y: positive int>\n",
			57);
		return (0);
	}
	rush(x, y);
	return (0);
}
