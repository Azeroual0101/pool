/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:59:19 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/26 16:12:03 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_espaces(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

int	is_numbers(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	nb_signe;
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	nb_signe = 1;
	while (is_espaces(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nb_signe = nb_signe * (-1);
		i++;
	}
	while (is_numbers(str[i]))
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	sum = nb_signe * sum;
	return (sum);
}
