/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:42:54 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/03 13:05:42 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include<stdio.h>
int	main (int argc, char **argv)
{
	if(argc <= 1)
	{
		printf("Erro nos argumentos")
	}
	if (ft_str_is_printable(""))
		printf("non printable\n");cd 
	(ft_str_is_printable(argv[1]) == 1)
			printf("only printable or empty\n"); 
	return 0;
}
*/
