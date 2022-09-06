/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:27:41 by ledos-sa          #+#    #+#             */
/*   Updated: 2022/08/21 11:04:28 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tb(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}	
		i++;
	}
}

int main(void)
{
	int array[] ={1,4,2,6,34,123,754,24};
	ft_sort_int_tb(array,8);
	int i=0;
	for(i=0;i<8;i++)
	{
		printf("%d ",array[i]);
	}
}
