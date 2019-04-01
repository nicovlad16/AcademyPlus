/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 15:42:26 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 20:42:01 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*sir;

	i = 0;
	if (s == NULL)
		return (NULL);
	sir = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (sir)
	{
		while (s[i] != 0)
		{
			sir[i] = f(s[i]);
			i++;
		}
		sir[i] = '\0';
	}
	return (sir);
}
