/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 19:40:45 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 18:14:25 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*sir;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	sir = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (sir == NULL)
		return (NULL);
	ft_strcpy(sir, s1);
	ft_strcat(sir, s2);
	return (sir);
}
