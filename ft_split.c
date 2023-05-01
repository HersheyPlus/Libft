/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:41:16 by ssingka           #+#    #+#             */
/*   Updated: 2023/05/01 15:09:05 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_freememory(char **str, int size)
{
	while (size--)
		free(str[size]);
	free(str);
	return (-1);
}

static int	count_each_word(const char *str, char seperator)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == seperator || str[i + 1] == '\0') == 1
			&& (str[i] == seperator || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_each_word(char *dest, const char *src, char seperator)
{
	int	i;

	i = 0;
	while ((src[i] == seperator || src[i] == '\0') == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char seperator)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == seperator || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == seperator || str[i + j] == '\0') == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!split[word])
				return (ft_freememory(split, word - 1));
			write_each_word(split[word], str + i, seperator);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		words;

	if (str == NULL)
		return (NULL);
	words = count_each_word(str, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	result[words] = 0;
	if (write_split(result, str, c) == -1)
		return (NULL);
	return (result);
}
