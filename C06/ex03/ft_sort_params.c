/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:17:32 by abdazero          #+#    #+#             */
/*   Updated: 2025/08/02 18:26:46 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putargv(int i, char **argv)
{
	int	k;

	k = 0;
	while (argv[i][k])
	{
		write(1, &argv[i][k], 1);
		k++;
	}
}

void	ft_sort_argv(int argc, char *argv[])
{
	int	i;
	int	j;
	int	indexmax;

	i = 1;
	while (i < argc)
	{
		indexmax = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[indexmax], argv[j]) > 0)
				indexmax = j;
			j++;
		}
		if (indexmax != i)
			ft_swap(&argv[indexmax], &argv[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_argv(argc, argv);
	while (i < argc)
	{
		ft_putargv(i, argv);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
