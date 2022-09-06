/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvillano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:45:32 by pvillano          #+#    #+#             */
/*   Updated: 2022/08/21 02:45:38 by pvillano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*int main (void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;
	
	c = 2;
	d = 4;
	*a = c;
	*b = d;
	
	printf("%d\n", a);
	printf("%d\n", b);
	
	ft_swap (a, b);
	
	printf("%d\n", a);
	printf("%d\n", b);
	
	return (0);
}*/
