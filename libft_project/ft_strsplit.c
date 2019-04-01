/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 20:31:14 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 19:11:15 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int nr;
	int sub;

	nr = 0;
	sub = 0;
	while (*s != 0)
	{
		if (sub == 1 && *s == c)
			sub = 0;
		if (sub == 0 && *s != c)
		{
			sub = 1;
			nr++;
		}
		s++;
	}
	return (nr);
}

static int	ft_wlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != 0)
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nr_word;
	int		i;

	i = 0;
	nr_word = ft_count((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (nr_word + 1));
	if (t == NULL)
		return (NULL);
	while (nr_word--)
	{
		while (*s == c && *s != 0)
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
