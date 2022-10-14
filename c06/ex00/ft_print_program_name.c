/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:21:09 by selhilal          #+#    #+#             */
/*   Updated: 2022/08/06 20:29:18 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft(char *d)
{
	int	i;

	i = 0;
	while (d[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		write (1, argv[i], ft(argv[i]));
	write (1, "\n", 1);
	return (0);
}
