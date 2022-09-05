/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:50:19 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/20 20:51:56 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	long2;

	long2 = nb;
	if (long2 < 0)
	{
		//ft_putchar('-');
		long2 = -long2;
		ft_putchar('-' + long2 + '0');
	}
	
	if (long2 > 9)
	{
		ft_putnbr(long2 / 10);
		ft_putnbr(long2 % 10);
	}
	else
	{
		//ft_putchar(long2 + '0');
	}
}	

int main()
{
ft_putnbr(-8);
return 0;
}
