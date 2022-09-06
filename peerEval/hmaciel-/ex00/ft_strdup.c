/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:24:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/09/05 19:09:01 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *)malloc(sizeof(src) + 1);
	ft_strcpy(copy, src);
	return (copy);
}
/*
int	main ()
{
	char src[] = "teste";
	char *dest;
	
	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
}*/
