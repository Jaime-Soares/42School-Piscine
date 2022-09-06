/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:34:45 by vinperei          #+#    #+#             */
/*   Updated: 2022/09/06 17:34:56 by vinperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		x = -x;
		ft_putchar('-');
	}
	if (x < 10)
	{
		ft_putchar(x + '0');
	}
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(2244);
	return (0);
}*/
