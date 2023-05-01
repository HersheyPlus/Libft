/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:49:58 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/25 15:05:09 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lasted;

	lasted = lst;
	if (!lst)
		return (NULL);
	while (lasted -> next)
		lasted = lasted -> next;
	return (lasted);
}
