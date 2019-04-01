/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 13:36:35 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/11 10:16:31 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 1)
		return (0);
	else if (index < 3)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
