/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:28:39 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/14 17:30:50 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lent(int n)
{
	int	i;

	i = 0;
	if (n == 0 || n < 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = lent(n);
	num = malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n != 0 && len >= 0)
	{
		num[len-- - 1] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}
