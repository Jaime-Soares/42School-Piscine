/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:45:56 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 09:46:16 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char 	str[11] = "2ASDEFG";
	char 	result;
	
	result = ft_str_is_uppercase(str) + '0';
	write(1, &result, 1); 
	
}
*/
