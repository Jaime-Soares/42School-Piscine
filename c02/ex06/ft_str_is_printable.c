/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:50:47 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 09:50:51 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
int	main(void)
{
	char 	str[11] = "s\ndhfk243fgs";
	char 	result;

	result = ft_str_is_printable(str) + '0';
	write(1, &result, 1);	
}
*/
