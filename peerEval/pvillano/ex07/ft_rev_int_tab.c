/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvillano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:58:16 by pvillano          #+#    #+#             */
/*   Updated: 2022/08/21 02:58:21 by pvillano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	reserva;
	int	a;
	int	z;

	a = 0;
	z = size - 1;
	while (a < size / 2)
	{
		reserva = tab[a];
		tab[a] = tab[z];
		tab[z] = reserva;
		a++;
		z--;
	}	
}
/*
int main (void)
{
	int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("%d\n", numeros[3]);
	printf("%d\n", numeros[7]);
	ft_rev_int_tab(numeros, 10);
	printf("%d\n", numeros[3]);
	printf("%d\n", numeros[7]);
	return (0);
}*/
