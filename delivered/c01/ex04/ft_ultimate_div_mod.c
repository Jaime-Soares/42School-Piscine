/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:32:34 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 11:32:47 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	if (*b != 0)
	{
		d = *a / *b;
		m = *a % *b;
		*a = d;
		*b = m;
	}
}
/*
#include <stdio.h>
int	main(void)
{
    int nbr1;
    int nbr2;
    int *a;
    int *b;
    
    nbr1 = 10;
    nbr2 = 5;
    a = &nbr1;
    b = &nbr2;
    printf("Before\n");
    printf("nbr1: %d\n", nbr1);
    printf("nbr2: %d\n", nbr2);
    ft_ultimate_div_mod(a, b);
    printf("After\n");
    printf("nbr1: %d\n", nbr1);
    printf("nbr2: %d\n", nbr2);
}
*/
