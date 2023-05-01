/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:50:12 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/25 15:05:33 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;

	if (!lst)
		return ;
	if (*lst)
	{
		last_lst = ft_lstlast(*lst);
		last_lst -> next = new;
	}
	else
		*lst = new;
}
