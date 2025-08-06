/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:29:42 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/22 22:27:28 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < nb && *src != '\0')
	{
		dest[len] = *src;
		i++;
		src++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
