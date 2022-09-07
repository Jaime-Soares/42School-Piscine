/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:44:11 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/25 11:51:49 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

long int	ft_negative(long int value)
{
	if (value < 0)
	{
		write (1, "-", 1);
		value *= -1;
	}
	return (value);
}

int	ft_size(long int value)
{
	int	sz;

	sz = 0;
	while (value >= 1)
	{
		value /= 10;
		sz++;
	}
	return (sz);
}

int	ft_power(int exp)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (i <= exp)
	{
		result *= 10;
		i++;
	}
	return (result);
}

void	ft_run(long int value)
{
	int	size;
	int	digit;

	value = ft_negative(value);
	size = ft_size(value);
	while (size > 0)
	{
		digit = value % ft_power(size) / ft_power(size - 1) + '0';
		write(1, &digit, 1);
		size--;
	}
}

void	ft_putnbr(int nb)
{
	long int	value;

	value = nb;
	ft_run(value);
}
