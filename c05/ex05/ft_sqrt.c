/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:10:25 by selhilal          #+#    #+#             */
/*   Updated: 2022/08/08 16:25:10 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb > 0)
	{
		while (sqr <= 46360)
		{
			if (ft_power(sqr, 2) == nb)
				return (sqr);
			sqr++;
		}
	}
	return (0);
}
