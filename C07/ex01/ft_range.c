/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:05:55 by abdazero          #+#    #+#             */
/*   Updated: 2025/08/03 16:51:18 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	array = malloc(len * sizeof(int));
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
