/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:49:38 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/25 23:22:55 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	cal_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	k;
	unsigned int	i;

	k = 0;
	len_src = cal_len(src);
	len_dest = cal_len(dest);
	i = len_dest;
	if (len_dest >= size)
		return (size + len_src);
	while (src[k] && i < size - 1)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (len_src + len_dest);
}
