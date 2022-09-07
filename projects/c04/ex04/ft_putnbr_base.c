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

// get base size
// get value of base if nbr < base size
// go step by step (get remainder to get position)
// add to result array (base[position])
// go step by step (divide by base size)

#include <stdio.h>
// base array count
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

// reverse result array
void    rev_arr(char *res)
{
    char    mid;
    int size;
    int i;
    
    i = 0;
    size = ft_base_count(res);
    while (i < size / 2)
    {
        mid = res[i];
        res[i] = res[size - 1 - i];
        res[size - 1 - i] = mid;
        i++;
    }
    
}

// get chars
void ft_putnbr_base(int nbr, char *base)
{
	char	res[99];
	int	base_size;
	int	char_pos;
	int	i;

	base_size = ft_base_count(base);
	i = 0;
	// if number inside base range
	if (nbr <= base_size - 1)
	{
		res[i] = base[nbr];
	}
	else
	{
		while(nbr > base_size - 1)
		{
			char_pos = nbr % base_size;
			//get remainder squeezed to base range to get position in base
			while (char_pos > base_size - 1)
			{
			    char_pos %= base_size;
			}
			// add to result array
			res[i] = base[char_pos];
			//
			nbr /= base_size;
			i++;
			if (nbr <= base_size - 1)
			{
				res[i] = base[nbr];
				nbr /= base_size;
				i++;
				res[i] = '\0';
			} 
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

