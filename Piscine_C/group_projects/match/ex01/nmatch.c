/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:03:14 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/17 20:36:02 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 == '\0' && *s2 != '*' && *s2 != '\0')
		return (0);
	else if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s1 == *s2 && *s2 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	return (0);
}