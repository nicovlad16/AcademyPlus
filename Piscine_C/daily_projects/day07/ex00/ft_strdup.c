/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:59:18 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/14 16:13:10 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
        i++;
    return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	if (!src)
		return (0);
	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(*src) * (len + 1));
	ft_strcpy(copy, src);
	return (copy);
}
