#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int len, char start, char mid, char end)
{
	int	i;

	i = 2;
	ft_putchar(start);
	while (i < len)
	{
		ft_putchar(mid);
		i++;
	}
	if (len > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}
