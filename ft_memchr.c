/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:39:52 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/12 14:00:09 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*c_s;
	size_t			i;

	c_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (c_s[i] == (unsigned char)c)
			return (&c_s[i]);
		i++;
	}
	return (0);
}
