/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:58:55 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/27 13:59:00 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i;
	
	i = 0;
	while (*src && i < n)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[14] = "Ola tudo bem";
	char	dest[14] = "ola";
	unsigned int n;
	
	n = 10;
	
	*ft_strncpy(dest, src, n);
	printf("%s", dest);
}
*/
