/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:14:03 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 16:14:06 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_write_digit(int dig, int changed)
{
	if (changed)
	{
		dig--;
		changed = 0;
	}
	dig += '0';
	write(1, &dig, 1);
	return changed;	
}

void	ft_get_digit(long int num, int changed)
{
	int	power;
	long int	number;
	
	number = num;
	power = 1;
	while(number >= 10)
	{
		number /= 10;
		power *= 10;
	}
	changed = ft_write_digit(number, changed);
	num %= power;
	if(num < power/10)
	{
		num += power / 10;
		changed = 1;
	}
	if (num < 10)
	{
		changed = ft_write_digit(num, changed);
	}
	else
	{
		ft_get_digit(num, changed);
	}
}

void 	ft_putnbr(int nb)
{	
	long int	number;
	char	digit;
	int changed;
	
	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	changed = 0;
	ft_get_digit(number, changed);
	
}

int	main()
{
	int number;
	
	number = 4020;
	ft_putnbr(number);
	return 0;
}


