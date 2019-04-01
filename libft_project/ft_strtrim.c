/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 20:15:15 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 18:40:02 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*sir;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(1));
	while ((s[j] == ' ' || s[j] == '\n' ||
				s[j] == '\t' || s[j] == '	'))
		j--;
	sir = ft_strsub(s, i, j - i + 1);
	if (sir == NULL)
		return (NULL);
	return (sir);
}
