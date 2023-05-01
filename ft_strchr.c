/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:10:24 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/26 23:07:25 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	ptr = (char *)s;
	chr = (char)c;
	while (*ptr != chr)
	{
		if (*ptr++ == '\0')
			return (NULL);
	}
	return (ptr);
}
