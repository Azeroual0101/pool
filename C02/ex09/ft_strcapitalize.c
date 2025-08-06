/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:16:23 by abdazero          #+#    #+#             */
/*   Updated: 2025/07/21 13:31:17 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	nv_mot;
	int	i;

	i = 0;
	nv_mot = 1;
	while (str[i])
	{
		if (is_alphanum(str[i]))
		{
			if (nv_mot && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!nv_mot && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			nv_mot = 0;
		}
		else
		{
			nv_mot = 1;
		}
		i++;
	}
	return (str);
}
