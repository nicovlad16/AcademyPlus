/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 17:38:23 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/11 14:22:46 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_rev(int n)
{
	int rev;

	rev = 0;
	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	return (rev);
}

void	ft_print_zero(int nr_zero)
{
	while (nr_zero != 1)
	{
		ft_putchar('0');
		nr_zero = nr_zero / 10;
	}
}

void	ft_putnbr(int nb)
{
	int rev;
	int nr;
	int nr_zero;

	nr_zero = 1;
	while (nb % 10 == 0)
	{
		nr_zero = nr_zero * 10;
		nb = nb / 10;
	}
	rev = ft_rev(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	rev = ft_rev(nb);
	while (rev != 0)
	{
		nr = rev % 10;
		ft_putchar('0' + nr);
		rev = rev / 10;
	}
	ft_print_zero(nr_zero);
}
