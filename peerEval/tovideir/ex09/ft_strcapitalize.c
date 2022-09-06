/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:18:47 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/03 13:09:47 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_str_is_alphanumeric(char c)
{
	if (c < '0')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	if (c > 'z' )
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (ft_str_is_alphanumeric(str[i]) == 1)
		{
			str[i] = ft_strupcase(str[i]);
			i++;
		}
		while (ft_str_is_alphanumeric(str[i]) == 1)
		{
			str[i] = ft_strlowcase(str[i]);
			i++;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int    main(int argc, char    **argv)
{
   char str[100];

   strcpy(str, argv[1]);
   if(argc < 1)
   {
	  printf("Faltam argumentos\n");
	  return 0;
   }
   else
   {
	  printf("%s\n", ft_strcapitalize(argv[1]));
	  return 0;
   }
}
*/