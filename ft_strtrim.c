/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:33:38 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/13 12:02:15 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*sub;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (check(s1[i], set) && s1[i])
		i++;
	while (check(s1[len - 1], set) && len > 0)
		len--;
	if (len == 0)
		sub = malloc(1);
	else
		sub = malloc(sizeof(char) * (len - i + 1));
	if (!sub)
		return (NULL);
	while (i < len)
		sub[j++] = s1[i++];
	sub[j] = '\0';
	return (sub);
}
