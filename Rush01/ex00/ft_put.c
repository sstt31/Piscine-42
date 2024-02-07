#include <unistd.h>

void	ft_put(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}
