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

#include <stdio.h>
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
	int	size;
	char	*str;
	int i;
	
	i = 0;
	size = ft_string_size(src);
	str = (char *) malloc(size);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);	
}

int	main()
{
	char	src[15] = "Hello my friend";
	
	printf("%s", ft_strdup(src));
	
}
