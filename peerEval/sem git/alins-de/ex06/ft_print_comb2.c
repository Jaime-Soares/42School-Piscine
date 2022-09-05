/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alins-de <alins-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:56:42 by alins-de          #+#    #+#             */
/*   Updated: 2022/08/23 12:44:47 by alins-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a)
{
	char	a1;
	char	a2;	

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			write(1, " ", 1);
			ft_print(b);
			if (a != 98 || b != 99)
			{		
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
