/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:35:17 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/12 18:33:31 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long long	check_range(unsigned long long n, int sign)
{
	if (n <= 9223372036854775807)
		return (n * sign);
	if (sign < 0)
		return (0);
	return (-1);
}

static int	check_iss(char s)
{
	if (s == ' ' || s == '\n' || s == '\f' || s == '\r'
		|| s == '\t' || s == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (check_iss(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	n = check_range(n, sign);
	return (n);
}
