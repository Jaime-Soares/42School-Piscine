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

int ft_power(long int number)
{
    int     power;
    
    power = 1;
    while (number >= 10)
    {
        number /= 10;
        power *= 10;
    }
    return (power);
}

void    ft_print_digits(long int number, int power)
{
    int digit;
    
    while (power >= 1)
    {
        if(number >= power)
        {
            digit = number / power + '0';
            number %= power;
            write(1, &digit, 1);
        }
        else
        {
            write(1, "0", 1);
        }
        power /= 10;
    }
}

void 	ft_putnbr(int nb)
{	
	long int	number;
	int power;
	char	digit;
	
	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number < 10)
	{
	    digit = number + '0';
		write(1, &digit, 1);
	}
	else
	{
	    power = ft_power(number);
	    ft_print_digits(number, power);
	}
}
/*
int	main()
{
	int number;
	
	number = -2147483648;
	ft_putnbr(number);
	return 0;
}
*/

