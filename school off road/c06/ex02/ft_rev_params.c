/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:15:51 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/30 17:16:17 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int     i;
	
	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			str = argv[i];
			while (*str)
			{
				write(1, str, 1);
				str++;
				
			}
			if (i > 1)
			{
			    write(1, "\n", 1);
			}
			i--;
		}			
	}
}
