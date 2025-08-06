/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:41:57 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/27 21:21:14 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len_base(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	converte(long nbr, char *base, int len)
{
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		converte(nbr / len, base, len);
		write(1, &base[nbr % len], 1);
	}
}

int	is_dup(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_signe(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = len_base(base);
	if (len < 2 || is_dup(len, base) || is_signe(base))
	{
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	converte(nb, base, len);
}
