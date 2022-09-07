/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:03:11 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/31 17:03:14 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

header files in C - precompilation definitions
header files are simply files in which you can declare your own functions that you can use in your main program or these can be used while writing large C programs.

****
head.h example:

void add(int a, int b)
{
    printf("Added value=%d\n", a + b);
}
void multiply(int a, int b)
{
    printf("Multiplied value=%d\n", a * b);
}

****
include in program:
#include <stdio.h>
#include "myhead.h" //same location (folder) as main
int main()
{
    add(4, 6);
  
    /*This calls add function written in myhead.h  
      and therefore no compilation error.*/
    multiply(5, 5);
  
    // Same for the multiply function in myhead.h
    printf("BYE!See you Soon");
    return 0;
}

****
other example of file.h

typedef enum { false = 0, true = !false } t_bool;
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define TRUE 1
#define FALSE 2
#define SUCCESS 0

#include <unistd.h>

int	EVEN(int nbr)
{
	if(nbr%2 == 0)
	{
		return (1);
	}
	return (0);
}
