/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:39:56 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/27 22:30:06 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_valid_base(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+'
			|| base[i] == '-'
			|| base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1);
}

int	value_of_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	signe(int *i, char *str)
{
	int	sign;

	sign = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	len;
	int	pos;

	result = 0;
	i = 0;
	len = ft_strlen(base);
	if (len < 2 || is_valid_base(len, base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = signe(&i, str);
	pos = value_of_char(str[i], base);
	while (pos != -1)
	{
		result = result * len + pos;
		i++;
		pos = value_of_char(str[i], base);
	}
	return (result * sign);
}
