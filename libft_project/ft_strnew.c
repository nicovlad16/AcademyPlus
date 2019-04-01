/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:26:57 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/17 19:50:28 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *sir;

	sir = (char *)malloc(size + 1);
	if (sir == NULL)
		return (NULL);
	ft_bzero(sir, size + 1);
	return (sir);
}
