/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:03:47 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/28 12:53:50 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	len_dest;
// 	size_t	len_src;
// 	size_t		i;
// 	size_t	result;

// 	len_src = ft_strlen(src);
// 	len_dest = ft_strlen(dst);
// 	i = 0;
// 	result = 0;
// 	if (size > len_dest)
// 		result = len_src + len_dest;
// 	else if (size < len_dest || size == len_dest)
// 		result = len_src + size;
// 	while (src[i] && len_dest + 1 < size)
// 	{
// 		dst[len_dest] = src[i];
// 		i++;
// 		len_dest++;
// 	}
// 	dst[len_dest] = '\0';
// 	return (result);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*get_src;
	const char	*get_dst;
	size_t		i;
	size_t		dstlen;

	i = size;
	get_dst = dst;
	get_src = src;
	while (i-- > 0 && *dst)
		dst++;
	dstlen = dst - get_dst;
	i = size - dstlen;
	if (i-- == 0)
		return (dstlen + ft_strlen(src));
	while (*src)
	{
		if (i > 0)
		{
			*dst++ = *src;
			i--;
		}
		src++;
	}
	*dst = '\0';
	return (dstlen + (src - get_src));
}
