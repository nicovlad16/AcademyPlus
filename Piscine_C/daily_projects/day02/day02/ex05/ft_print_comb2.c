/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:32:20 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/07 20:47:28 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_convert_number(int n)
{
	char x;
	char y;

	x = (char)(n / 10) + '0';
	y = (char)(n % 10) + '0';
	ft_putchar(x);
	ft_putchar(y);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_convert_number(a);
			ft_putchar(' ');
			ft_convert_number(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
