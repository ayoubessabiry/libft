/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:59:49 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/12 17:20:00 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_l;
	size_t	dst_l;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	src_l = 0;
	dst_l = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	while (dst[dst_l])
	{
		dst_l++;
		j++;
	}
	src_l = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_l)
		return (src_l + dstsize);
	while (src[i] && i < dstsize - dst_l - 1)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (src_l + dst_l);
}
