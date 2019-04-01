/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 15:46:19 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 20:42:59 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*sir;

	i = 0;
	if (s == NULL || f == NULL || *f == NULL)
		return (NULL);
	sir = ft_strnew(ft_strlen(s));
	if (!sir)
		return (NULL);
	while (s[i] != '\0')
	{
		sir[i] = (*f)(i, s[i]);
		i++;
	}
	sir[i] = '\0';
	return (sir);
}
