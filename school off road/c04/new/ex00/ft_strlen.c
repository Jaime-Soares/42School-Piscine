/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:21:41 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 14:21:45 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return(len);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main()
{
	int len;
	char str[] = "Ola, tudo bem?";
	
	len = ft_strlen(str);
	printf("len e %d", len);
	return (0);
}
*/
