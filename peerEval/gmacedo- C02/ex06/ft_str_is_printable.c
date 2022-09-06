/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:14:11 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/29 12:37:36 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	int		j;
	char	s;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		s = str[i];
		if (s <= 31 || s == 127)
		{
			j = 0;
		}
		i++;
	}
	return (j);
}	
/*
int	main(void)
{
	int	is_print;
	char	a[] = "12";
	is_print = ft_str_is_printable(a);
	printf("%d\n", is_print);
}	
*/
