/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:14:14 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/30 13:14:18 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_count_base(char *base)
{
	int	size;

	size = 0;
	while (*base)
	{
		size++;
		base++;
	}
	return (size);
}

void	ft_rev_arr(char *res)
{
	int	arr_size;
	char	aux;
	int	i;
	
	i = 0;
	arr_size = 0;
	while (*res)
	{
		arr_size++;
	}
	if (arr_size > 1)
	{
		while (i <= arr_size / 2)
		{
			aux = res[i];
			res[i] = res[arr_size - 1 -i];
			res[arr_size - 1 -i] = aux;
			i++;
		}
	}
} 

void ft_putnbr_base(int nbr, char *base)
{
	int	num;
	char	res[99];
	int digit;
	int i;
    int size;
	
	num = nbr;
	i = 0;
	size = ft_count_base(base);
	while ( nbr > size)
	{
		digit = nbr % size;
		res[i] = base[digit];
		nbr /= size;
		i++;
	}
	res[i] = '\0';
	ft_rev_arr(res);
	printf("My number: %s", res);
}

int	main()
{
	int	nbr = 282;
	char	base[17] = "0123456789ABCDEF";
	
	ft_putnbr_base(nbr, base);
	return 0;
}

