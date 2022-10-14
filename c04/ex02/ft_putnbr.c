/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:09:59 by selhilal          #+#    #+#             */
/*   Updated: 2022/08/03 17:09:37 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = nb;
	if (nb < 0)
	{
		put('-');
		i *= -1;
	}
	if (i < 10)
	{
		put(i + '0');
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
