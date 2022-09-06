/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:07:54 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/03 12:55:45 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int main (int argc, char ** argv)
{
	if (argc <= 1)
	{
		printf("Erro nos argumentos\n");
		return 0;
	}	
	else  
	{
		if (ft_str_is_alpha(argv[1]) == 0)
		{
			printf("Contem outros carateres\n");
			return 0;
		}
		else if (ft_str_is_alpha(argv[1]) == 1)
		{
			printf("So contem abc ou vazia\n");
			return 0;
		}	
	}
}
*/