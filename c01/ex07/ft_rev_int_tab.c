/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int-tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:51:34 by selhilal          #+#    #+#             */
/*   Updated: 2022/07/24 04:01:49 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tm;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tm = tab[i];
		tab[i] = tab[j];
		tab[j] = tm;
		i++;
		j--;
	}
}
