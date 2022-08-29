/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:21:11 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 16:21:23 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort(int *tab, int size)
{
	int	sorted;
	int	i;
	int	aux;

	sorted = 0;
	i = 0;
	while (i < size - 1 && !sorted)
	{
		sorted = 1;
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			*(tab + i) = tab[i + 1];
			*(tab + i + 1) = aux;
			i = 0;
			sorted = 0;
		}
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	digit;
	int	i;
	
	ft_sort(tab, size);
	i = 0;
	while (i < size)
	{
		digit = tab[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	
	
}

void	main()
{
	int	arr[] = {1, 5, 4, 3, 2, 0};
	int	*tab;
	int	size;
	
	tab = arr;
	ft_sort_int_tab(tab, 6);
}
