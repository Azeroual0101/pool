/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:56:48 by abdazero          #+#    #+#             */
/*   Updated: 2025/08/04 20:01:25 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *base);
int	is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	cal_len_str(int nbr, char *base)
{
	int	i;
	int	len;

	i = 0;
	if (nbr == 0)
		return (1);
	len = ft_strlen(base);
	while (nbr > 0)
	{
		nbr = nbr / len;
		i++;
	}
	return (i);
}

void	convert_to(int nbr, char *base_to, char *str, int i)
{
	int	base_len;

	base_len = ft_strlen(base_to);
	while (nbr > 0)
	{
		str[i] = base_to[nbr % base_len];
		nbr = nbr / base_len;
		i--;
	}
}

int	traiter_signe(int *is_signe, int nbr)
{
	if (nbr < 0)
	{
		*is_signe = 1;
		return (-nbr);
	}
	return (nbr);
}

void	case_zero(char *str, char *base_to, int is_neg)
{
	str[is_neg] = base_to[0];
	str[is_neg + 1] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		en_dec;
	int		len_str;
	int		i;
	int		is_neg;
	char	*str;

	is_neg = 0;
	if (is_valid_base(base_to) == 0 || is_valid_base(base_from) == 0)
		return (0);
	en_dec = ft_atoi_base(nbr, base_from);
	en_dec = traiter_signe(&is_neg, en_dec);
	len_str = cal_len_str(en_dec, base_to);
	str = malloc((len_str + is_neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = len_str + is_neg - 1;
	str[len_str + is_neg] = '\0';
	if (en_dec == 0)
		case_zero(str, base_to, is_neg);
	else
		convert_to(en_dec, base_to, str, i);
	if (is_neg)
		str[0] = '-';
	return (str);
}
