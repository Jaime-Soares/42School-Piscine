/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:15:08 by disantos          #+#    #+#             */
/*   Updated: 2022/09/02 11:41:32 by disantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **argv)
{
	int	c;
	int	s;

	s = 1;
	if (size > 1)
	{
		while (s < size)
		{
			c = 0;
			while (argv[s][c] != '\0')
				c++;
			write(1, argv[s], c);
			write(1, "\n", 1);
			s++;
		}
	}
	return (0);
}
