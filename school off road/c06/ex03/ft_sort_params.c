/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:25:57 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/30 17:26:07 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_string_change(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 > *str2)
		{
			return (1);
		}
		else if (*str1 < *str2)
		{
		    return (0);
		}
		str1++;
		str2++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	change;
	int	comp_end;
	char	*aux;
	char	*str;

	change = 0;
	comp_end = 0;
	i = 1; 
	// teste pico ana
	while (!comp_end)
	{
		while (!change && !comp_end)
		{
		    change = ft_string_change(argv[i], argv[i + 1]);
			if (change)
			{
				aux = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = aux;
			}
			if (i + 1 == argc - 1 && !change)
			{
				comp_end = 1;
			}
			i++;
		}
		if (change)
		{
			change = 0;
			i = 0;
		}
		
	}
	
	//write array
	i = 1;
	while (i < argc)
	{
	    str = argv[i];
		while (*str)
		{
			write(1, str, 1);
			str++;
			
		}
		if (i > 0)
		{
		    write(1, "\n", 1);
		}
		i++;
	}
}
