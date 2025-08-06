/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:28:17 by abdazero          #+#    #+#             */
/*   Updated: 2025/08/03 16:51:56 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*rang;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	rang = malloc(len * sizeof(int));
	if (!rang)
		return (-1);
	while (i < len)
	{
		rang[i] = min;
		i++;
		min++;
	}
	*range = rang;
	return (len);
}
