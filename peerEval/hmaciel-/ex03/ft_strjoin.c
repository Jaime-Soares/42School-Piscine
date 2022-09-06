/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:32:37 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/09/05 17:59:33 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	final_dest;

	final_dest = ft_strlen(dest);
	index = 0;
	while (index < ft_strlen(src))
	{
		dest[final_dest] = src[index];
		index++;
		final_dest++;
	}
	dest[final_dest] = '\0';
	return (dest);
}

int	ft_checksize(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i++;
	}
	result = result + ((size - 1) * ft_strlen(sep));
	return (result + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mystring;
	int		totalsize;
	int		i;

	i = 0;
	totalsize = ft_checksize(size, strs, sep);
	mystring = (char *)malloc(sizeof(char) * totalsize);
	while (i < size)
	{
		ft_strcat(mystring, strs[i]);
		if (i < size - 1)
			ft_strcat(mystring, sep);
		i++;
	}
	mystring[totalsize] = '\0';
	return (mystring);
}
/*
int	main (void)
{
	char *dest;
	char *src[] = {"teste", "efetuado", "com", "sucesso"};
	dest = ft_strjoin(2, src, " ");

	printf("%s", dest);
	free(dest);
}*/
