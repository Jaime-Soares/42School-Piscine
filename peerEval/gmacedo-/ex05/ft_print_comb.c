/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:50:19 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/20 20:51:16 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <strings.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number[0] <= '7')
	{
		while (number[1] <= '8')
		{
			while (number[2] <= '9')
			{
				write (1, &number, 3);
				if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
					write (1, ", ", 2);
				number[2]++;
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		number[0]++;
		number[1] = number[0] + 1;
		number[2] = number[1] + 1;
	}
}	
