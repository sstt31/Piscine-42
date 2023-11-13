/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <badakh@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:14:50 by sbadakh           #+#    #+#             */
/*   Updated: 2023/10/06 09:32:40 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_char;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			nb = -147483648;
			write (1, "2", 1);
		}
		nb = -nb;
	}
	if (nb <= 9)
	{
		nb_char = nb + '0';
		write (1, &nb_char, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
