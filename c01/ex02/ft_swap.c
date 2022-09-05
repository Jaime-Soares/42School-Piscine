/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:23:10 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 11:23:15 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	m;

	m = *a;
	*a = *b;
	*b = m;
}
/*
#include <stdio.h>
int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	*a;
	int	*b;
	
	a = &nbr1;
	b = &nbr2;
	nbr1 = 1;
	nbr2 = 2;
	printf("Before:\n");
	printf("nbr1: %d\n", nbr1);
	printf("nbr2: %d\n", nbr2);
	ft_swap(a, b);
	printf("After:\n");
	printf("nbr1: %d\n", nbr1);
	printf("nbr2: %d\n", nbr2);
	
	ft_swap(a, b);
}
*/
