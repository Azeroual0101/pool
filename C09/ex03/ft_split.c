/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdazero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 01:23:38 by abdazero          #+#    #+#             */
/*   Updated: 2025/08/04 20:05:47 by abdazero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	i = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	len_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

char	*insert_word(char *str, char *charset)
{
	int		len;
	int		k;
	int		i;
	char	*word;

	k = 0;
	i = 0;
	len = len_word(str, charset);
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (str[k] && i < len)
	{
		word[i] = str[k];
		i++;
		k++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		nbr_words;
	int		i;
	int		count;
	char	**array;

	nbr_words = count_words(str, charset);
	array = malloc((nbr_words + 1) * sizeof(char *));
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			array[count] = insert_word(&str[i], charset);
			if (!array[count])
				return (NULL);
			count++;
			i += len_word(&str[i], charset);
		}
	}
	array[nbr_words] = NULL;
	return (array);
}
