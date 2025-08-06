/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:41:15 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/19 18:14:26 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	indexmin;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		indexmin = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[indexmin])
				indexmin = j;
			j++;
		}
		if (i != indexmin)
		{
			temp = tab[i];
			tab[i] = tab[indexmin];
			tab[indexmin] = temp;
		}
		i++;
	}
}
