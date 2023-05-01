/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:44:21 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/21 09:23:59 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	idx;

	if (!s || !f)
		return ;
	idx = 0;
	while (s[idx])
	{
		f(idx, s + idx);
		idx++;
	}
}

/* 
(idx, s + idx)
-> Passing pointer to the current character in the string (s + idx)
-> (s + idx) new pointer that point to the mem location of the
character at index idx 
*/