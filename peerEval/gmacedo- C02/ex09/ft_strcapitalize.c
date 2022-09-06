/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:14:11 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/25 12:15:56 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;
	char	c;

	i = 0;
	flag = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (flag == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (flag == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}	

/*
int main()
{
  char palavra[] ="oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
  printf("%s",ft_strcapitalize(palavra));
  return 0;
}
*/