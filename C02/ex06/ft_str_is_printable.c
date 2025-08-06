/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 00:45:21 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/20 23:41:26 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
