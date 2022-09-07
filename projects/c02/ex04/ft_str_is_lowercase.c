/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:29:17 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/27 15:29:23 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	result;
	
	result = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	
	result = ft_str_is_lowercase(str);
	result += '0';
	write(1, &result, 1); 
	
}
