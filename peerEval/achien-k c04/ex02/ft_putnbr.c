/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achien-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:31:58 by achien-k          #+#    #+#             */
/*   Updated: 2022/09/02 11:05:53 by achien-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int	nbr;
	char		n;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		n = nbr + '0';
		ft_putchar(n);
	}	
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/
