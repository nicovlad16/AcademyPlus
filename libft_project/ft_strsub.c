/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 19:29:01 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 18:35:47 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sir;

	sir = (char *)malloc(sizeof(char) * (len + 1));
	if (sir == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sir[i] = s[start + i];
		i++;
	}
	sir[i] = '\0';
	return (sir);
}
