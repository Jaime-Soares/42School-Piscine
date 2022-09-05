/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvillano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:48:38 by pvillano          #+#    #+#             */
/*   Updated: 2022/08/21 02:48:41 by pvillano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;
	int	y;
	x = a / b;
	y = a % b;
	*div = x;
	*mod = y;
}
/*int main (void)
{
	int *d;
	int *m;
	int ax;
	int bx;
	
	ax = 7;
	bx = 2;
	d = &ax;
	m = &bx;
	printf("%d\n", ax);
	printf("%d\n", bx);
	ft_div_mod (ax, bx, d, m);
	printf("%d\n", ax);
	printf("%d\n", bx);
	return (0);
	}*/
