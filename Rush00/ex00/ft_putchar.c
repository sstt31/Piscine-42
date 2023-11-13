/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escura <escura@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:30:57 by escura            #+#    #+#             */
/*   Updated: 2023/09/24 20:46:47 by escura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
