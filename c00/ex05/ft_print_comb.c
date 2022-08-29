/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:18:32 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/23 18:18:58 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (c <= '9')
		{
			ft_write(a, b, c);
			c++;
		}	
		if (c > '9')
		{
			c = ++b + 1;
		}	
		if (b > '9')
		{
			b = ++a + 1;
			c = b + 1;
		}
	}
}

void	ft_write(int a, int b, int c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, " ", 1);
	}
}
