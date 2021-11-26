/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:14:18 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/14 17:30:27 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char const *s, int n)
{
	char	*d;
	int		i;

	i = 0;
	d = malloc(sizeof(char) * n + 1);
	if (!d)
		return (NULL);
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

static int	snum(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	int		len;

	i = 0;
	t = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			t = 1;
			while (s[j] && s[j] != c)
				j++;
			if (t)
				len += 1;
			i = j - 1;
			t = 0;
		}
		i++;
	}
	return (len + 1);
}

char	**ft_split(char const *s, char c)
{
	char		**p;
	int			i;
	int			j;
	int			l;

	i = -1;
	l = 0;
	if (!s)
		return (NULL);
	p = malloc(sizeof(char *) * snum(s, c));
	if (!p)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			p[l++] = ft_strndup(&s[i], j - i);
			i = j - 1;
		}
	}
	p[l] = 0;
	return (p);
}
