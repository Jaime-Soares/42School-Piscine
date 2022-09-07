/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:45:08 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/31 11:45:43 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_string_size(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int	str_size;
	char	*str;
	int	i;
	int	char_size;

	char_size = 1;
	i = 0;
	str_size = ft_string_size(src);
	str = (char *) malloc(char_size * str_size);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);	
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "Hello my friend";
	
	printf("%s", ft_strdup(src));
	
}
*/
