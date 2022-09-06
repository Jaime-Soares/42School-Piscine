/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:27:54 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/04 20:10:55 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	 main(void)
{
	char	str1[4] = "";
	char	str2[7] = "banana";

	ft_strncpy(str1, str2, 3);  // calling out functtion ft_strcpy on the strings
	printf("%s\n", str1);  // str1 should now become str2
	return (0);
}*/
