/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irrodrig <irrodrig@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:08:12 by irrodrig          #+#    #+#             */
/*   Updated: 2022/08/23 14:32:22 by irrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = -1;
	while (n1++ < 98)
	{
		n2 = n1;
		while (n2++ < 99)
		{
			ft_putchar(' ');
			ft_putchar((n1 / 10) + '0');
			ft_putchar((n1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((n2 / 10) + '0');
			ft_putchar((n2 % 10) + '0');
			if (!(n1 == 98 && n2 == 99))
			{
				write(1, ",", 1);
			}
		}
	}
}
