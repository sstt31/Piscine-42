/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <badakh@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:25:48 by sbadakh           #+#    #+#             */
/*   Updated: 2023/09/25 14:31:49 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}
