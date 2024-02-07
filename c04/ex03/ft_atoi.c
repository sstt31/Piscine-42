#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	r;

	r = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * sign);
}
