/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvillano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:59:20 by pvillano          #+#    #+#             */
/*   Updated: 2022/08/21 02:59:25 by pvillano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	reserva;
	int	a;

	a = 0;
	while (a < size - 1)
	{
		if (tab[a] <= tab[a + 1])
		{
			a++;
		}
		else
		{
			reserva = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = reserva;
			a = 0;
		}	
	}
}
/*
int	main(void)
{
	int numeros[6] = {69, 21, 27, 1001, 7, 21};
	int x = 0;
	while (x < 6)
	{
	printf("%d\n", numeros[x]);
	x++;
	}
	x = 0;
	ft_sort_int_tab(numeros, 6);
	while (x < 6)
	{
	printf("%d\n", numeros[x]);
	x++;
	}
	return (0);
}*/
