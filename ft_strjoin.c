/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:43:36 by ssingka           #+#    #+#             */
/*   Updated: 2023/05/01 15:09:22 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	i = 0;
	if (s1 && s2)
	{
		new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!new)
			return (NULL);
		while (*s1)
			new[i++] = *(s1++);
		while (*s2)
			new[i++] = *(s2++);
		new[i] = '\0';
	}
	else
		return (NULL);
	return (new);
}
