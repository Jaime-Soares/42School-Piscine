/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:00:31 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/30 17:00:35 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int	i;
		
	i = 0; 
	if (argc > 1)
	{
		while (i < argc)
		{
			str = argv[1 + i];
			while (*str)
			{
				write(1, str, 1);
				str++;
				
			}
			if (i < argc - 2)
			{
			    write(1, "\n", 1);
			}
			i++;
		}			
	}
}
