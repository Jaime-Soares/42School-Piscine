/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:40:06 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 14:40:09 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int 	size;
	
	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

/*
int 	main()
{	
	char m[] = "hello";
    	char *str;
    	int size;
    	
	str = m;	
	size = ft_strlen(str) + '0';
	write(1, &size, 1);
}
*/
