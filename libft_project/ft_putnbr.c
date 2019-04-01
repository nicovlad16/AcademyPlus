/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 09:34:46 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/10 20:46:59 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}
