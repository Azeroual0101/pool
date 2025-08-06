/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:35:42 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/21 21:13:09 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	to_hexa(unsigned char c)
{
	char	i;
	char	j;

	i = "0123456789abcdef"[c / 16];
	j = "0123456789abcdef"[c % 16];
	write(1, "\\", 1);
	write(1, &i, 1);
	write(1, &j, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]) == 1)
			wwrite(1, &str[i], 1);
		else if (is_printable(str[i]) == 0)
			to_hexa(str[i]);
		i++;
	}
}
