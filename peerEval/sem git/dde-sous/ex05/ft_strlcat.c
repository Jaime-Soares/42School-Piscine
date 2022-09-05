/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:44:06 by dde-sous          #+#    #+#             */
/*   Updated: 2022/09/04 18:44:09 by dde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;
	unsigned int	res;

	j = ln(src);
	i = ln(dest);
	z = 0;
	if (size > i)
		res = i + j;
	else
		res = j + size;
	while (src[z] != '\0' && (i + 1) < size)
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*int main()
{
	char src[] = " tudo bem?";
	char dest[] = "Bom dia";
	printf("%d | %s", ft_strlcat(dest, src, 5), dest);
}*/
