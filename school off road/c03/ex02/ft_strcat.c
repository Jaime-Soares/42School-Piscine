/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:38:28 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/05 15:38:31 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	
	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++; 
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[99] = "Hello! How are you?";
	char	src[] = "Hi there";
	
	dest = ft_strcat(dest, src);
	printf("%s", dest);
}
*/
