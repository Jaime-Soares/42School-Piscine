/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:38:39 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 11:38:50 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

/*
#include <stdio.h>
int 	main(void)
{	
	char m[5] = "hello";
    	char *str;
	str = m;	
	ft_putstr(str);
}
*/
