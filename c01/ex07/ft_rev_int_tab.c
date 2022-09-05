/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:59:47 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 14:59:51 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = *(tab + i);
		*(tab + i) = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {1, 5, 4, 3, 1, 0};
	int	*tab;
	int	size;
	int	i;

	i=0;
	tab = arr;
	size = 6;
	ft_rev_int_tab(tab, size);
	while(i < 6)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}
*/
