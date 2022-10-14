/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:08:31 by selhilal          #+#    #+#             */
/*   Updated: 2022/07/28 14:47:08 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	hy(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	com;

	i = 0;
	com = 1;
	hy(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (com == 1)
				str[i] -= 32;
			com = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			com = 0;
		else
			com = 1;
		i++;
	}
	return (str);
}
