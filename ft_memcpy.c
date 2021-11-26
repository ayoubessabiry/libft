/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:17:13 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/11 21:59:49 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	cdst = (char *)dst;
	csrc = (char *)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
