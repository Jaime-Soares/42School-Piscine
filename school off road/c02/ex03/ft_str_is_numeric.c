/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:23:26 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/27 15:23:39 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	result;
	
	result = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			result = 0;
		}
		str++;
	}
	return (result);
}

int	main(void)
{
	char 	str[11] = "sdhfk243/*";
	int 	result;
	
	result = ft_str_is_numeric(str);
	result += '0';
	write(1, &result, 1); 
	
}
