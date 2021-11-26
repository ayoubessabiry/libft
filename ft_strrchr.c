/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:18:25 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/12 10:45:00 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*f;

	i = 0;
	f = NULL;
	if (c == '\0')
	{
		while (s[i])
			i++;
		return ((char *)&s[i]);
	}
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			f = ((char *)&s[i]);
		i++;
	}
	return (f);
}
