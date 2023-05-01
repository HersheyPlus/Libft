/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:43:45 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/25 20:29:56 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*trimmed;
// 	size_t	start;
// 	size_t	end;

// 	if (!s1)
// 		return (NULL);
// 	if (!set)
// 		return (ft_strdup(s1));
// 	end = ft_strlen(s1) - 1;
// 	start = 0;
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		++start;
// 	while (s1[end] && ft_strchr(set, s1[end]))
// 		--end;
// 	trimmed = ft_substr(s1, start, end - start + 1);
// 	return (trimmed);
// }
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	while (*str)
	{
		if (ft_strchr(set, *str) == NULL)
			break ;
		str++;
	}
	len = ft_strlen(str);
	while (len)
	{
		if (ft_strchr(set, str[len - 1]) == NULL)
			break ;
		len--;
	}
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, str, len + 1);
	return (result);
}
