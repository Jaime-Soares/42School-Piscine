/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:46:55 by disantos          #+#    #+#             */
/*   Updated: 2022/09/02 11:14:22 by disantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	while (argc > 0 && *argv[0])
	{
		write(1, &*argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
}
