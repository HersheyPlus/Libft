/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:44:03 by ssingka           #+#    #+#             */
/*   Updated: 2023/04/23 11:32:12 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_of_num(int n)
{
	int	len;

	len = 1;
	if (n < 0 && len++)
		n = -n;
	while (n > 9 && len++)
		n /= 10;
	return (len);
}

static void	ft_setchr(char *str, int n, int len)
{
	int	stop;

	stop = 0;
	if (n < 0)
	{
		n = -n;
		stop = 1;
		str[0] = '-';
	}
	while (len > stop)
	{
		str[--len] = '0' + (n % 10);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
	{
		result = malloc(12 * sizeof(char));
		if (!result)
			return (NULL);
		result[11] = '\0';
		ft_memcpy(result, "-2147483648", sizeof(char) * 11);
		return (result);
	}
	len = ft_len_of_num(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	ft_setchr(result, n, len);
	return (result);
}
