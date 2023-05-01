/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:18:41 by ssingka           #+#    #+#             */
/*   Updated: 2023/05/01 23:40:00 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	sum;

	sum = count * size;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, sum);
	return (ptr);
}
