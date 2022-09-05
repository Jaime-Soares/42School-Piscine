/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:02:04 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/03 14:02:07 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = -1;
		}
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
	ft_sort_int_tab(tab, size);
	while(i < 6)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}
*/
