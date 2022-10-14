/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:22:07 by selhilal          #+#    #+#             */
/*   Updated: 2022/08/08 10:58:20 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rec_factorial ;

	i = 0;
	rec_factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	while (i < nb)
	{
		rec_factorial = rec_factorial * (i + 1);
			i++;
	}
	return (rec_factorial);
}
