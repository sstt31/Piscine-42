/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <badakh@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:38:48 by sbadakh           #+#    #+#             */
/*   Updated: 2023/10/09 09:40:37 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= (nb / div))
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(17));
	return (0);
}*/