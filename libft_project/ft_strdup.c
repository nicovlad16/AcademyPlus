/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:59:18 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 18:16:34 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
