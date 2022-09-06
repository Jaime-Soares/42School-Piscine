/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvillano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:49:38 by pvillano          #+#    #+#             */
/*   Updated: 2022/08/21 02:49:40 by pvillano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	w;
	int	x;
	int	y;
	int	z;

	w = *a;
	x = *b;
	y = w / x;
	z = w % x;
	*a = y;
	*b = z;
}
/*
int main (void)
{
	int *div;
	int *mod;
	int x;
	int y;
	
	div = &x;
	mod = &y;
	x = 7;
	y = 2;
	ft_ultimate_div_mod (div, mod);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}*/
