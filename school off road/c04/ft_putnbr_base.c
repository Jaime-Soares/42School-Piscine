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

int	ft_base_count(char *base)
{
	int	count;
	
	count = 0;
	while (*base)
	{
		count++;
		base++;	
	}
	return count;
}

void    rev_arr(char *res)
{
    char    mid;
    int size;
    int i;
    
    size = ft_base_count(res);
    while (i < size / 2)
    {
        mid = res[i];
        res[i] = res[size - 1 - i];
        res[size - 1 - i] = mid;
        i++;
    }
    
}

void ft_putnbr_base(int nbr, char *base)
{
	char	res[20];
	int	base_size;
	int	char_pos;
	int	i;
	
	base_size = ft_base_count(base);
	while(nbr > base_size)
	{
		char_pos = nbr % base_size;
		res[i] = base[char_pos];
		nbr /= base_size;
		i++;
		if (nbr <= base_size)
		{
			res[i] = base[nbr];
			nbr /= base_size;
			i++;
			res[i] = '\0';
		} 
	}
	rev_arr(res);
	printf("%s", res);
	
}

int	main()
{
	int	num = 282;
	char	base[17] = "0123456789ABCDEF";
	
	ft_putnbr_base(num, base);
	return 0;
}

