/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:54:13 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 13:54:19 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_diff(char *s1, char *s2, unsigned int n)
{
	int 	result;
	
	result = 0;
	if (*s1 > *s2)
	{
		result = 1;
	}
	else if (*s1 < *s2)
	{
		result = -1;
	}
	else if ((*(s1 + 1) || *(s2 + 1)) && result == 0 && n-1 > 0)
	{
		s1++;
		s2++;
		n--;
		result = ft_find_diff(s1, s2, n);
	}
	return (result);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;
	
	result = ft_find_diff(s1, s2, n);
	return (result);
}

int	main()
{
	int	result;
	unsigned int	size;
	char	s1[] = "Hello";
	char	s2[] = "He";
	
	size = 3;
	result = ft_strncmp(s1, s2, size);
	printf("My result is: %d", result);

}
