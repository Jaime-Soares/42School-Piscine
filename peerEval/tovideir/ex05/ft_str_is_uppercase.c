/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:09:10 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/03 13:06:33 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 'A')
			return (0);
		if (str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main (int argc, char **argv)
{
	if (argc <= 1)
	{
		printf("Erro nos argumentos\n");
		return 0;
	}	
	else  
	{
		if (ft_str_is_uppercase(argv[1]) == 0)
		{
			printf("Contem outros carateres\n");
			return 0;
		}
		else if (ft_str_is_uppercase(argv[1]) == 1)
		{
			printf("So contem ABC ou vazia\n");
			return 0;
		}	
	}
}
*/