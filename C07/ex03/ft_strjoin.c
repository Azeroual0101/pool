/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:38:43 by abdazero          #+#    #+#             */
/*   Updated: 2025/08/04 15:54:51 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcopy(int size, char *conca, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			conca[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size -1)
		{
			conca[k++] = sep[j++];
		}
		i++;
	}
	conca[k] = '\0';
	return (conca);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		len_sep;
	char	*conca;

	len_sep = ft_strlen(sep);
	if (size == 0)
	{
		conca = malloc(1);
		if (!conca)
			return (NULL);
		conca[0] = '\0';
		return (conca);
	}
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	conca = malloc((len + len_sep * (size - 1) + 1) * sizeof(char));
	conca = ft_strcopy(size, conca, strs, sep);
	return (conca);
}
