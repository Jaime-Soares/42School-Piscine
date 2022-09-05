/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:35:09 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/05 16:35:11 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	j;
	
	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
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
	unsigned int	nb;
	char	dest[99] = "Onde vais?";
	char	*src = "Vou a Paris";
	
	nb = 5;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
}
*/
