/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoelho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:02:19 by bcoelho-          #+#    #+#             */
/*   Updated: 2022/08/23 13:18:34 by bcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_two_numbers(int number)
{
	if (number < 10)
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
	else
	{	
		ft_putchar(number / 10 + '0');
		ft_putchar(number % 10 + '0');
	}
}

void	print_two_pairs(int a, int b)
{
	print_two_numbers(a);
	ft_putchar(' ');
	print_two_numbers(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_two_pairs(a, b);
			b++;
		}
		a++;
		write(1, "\n", 1);
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
