/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:21:48 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/28 15:57:50 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// char	*ft_strnstr(const char *hs, const char *ndl,	size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (!*ndl)
// 		return ((char *)hs);
// 	while (hs[i] != '\0' && i < len)
// 	{
// 		if (hs[i] == ndl[0])
// 		{
// 			while (ndl[j] != '\0' && hs[i + j] == ndl[j] && i + j < len)
// 			{
// 				if (ndl[j + 1] == '\0')
// 					return ((char *)&hs[i]);
// 				j++;
// 			}
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *hs, const char *ndl, size_t len)
{
	char	*str;
	char	*substr;
	size_t	substr_len;

	str = (char *)hs;
	substr = (char *)ndl;
	if (str == NULL && len == 0)
		return (NULL);
	if (!*ndl)
		return (str);
	substr_len = ft_strlen(substr);
	if (*str || str)
	{
		while (len-- && *str)
		{
			if (*str == *substr && len >= substr_len - 1)
				if (ft_strncmp(str, substr, substr_len) == 0)
					return (str);
			str++;
		}
	}
	return (NULL);
}
