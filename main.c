/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:46:48 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 15:27:05 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main()
{
	//testing char
	ft_printf("Testing for specifier c:\n");
	printf("This is %c\n", 't');
	ft_printf("This is %c\n\n", 't');

	//testing string 
	ft_printf("Testing for specifier s:\n");
	printf("This is %s\n", "tring");
	ft_printf("This is %s\n\n", "tring");

	//testing pointer 
	ft_printf("Testing for specifier p:\n");
	printf("This is %p\n", "tring");
	ft_printf("This is %p\n\n", "tring");

	//testing digit
	ft_printf("Testing for specifier d:\n");
	printf("This is %d\n", 69);
	ft_printf("This is %d\n\n", 69);

	//testing integer
	ft_printf("Testing for specifier i:\n");
	printf("This is %i\n", 69);
	ft_printf("This is %i\n\n", 69);

	//testing unsigned
	ft_printf("Testing for specifier u:\n");
	printf("This is %u\n", 4294967295u);
	ft_printf("This is %u\n\n", 4294967295u);

	//testing hexadecimal lower
	ft_printf("Testing for specifier x:\n");
	printf("This is %x\n", 3735928559u);
	ft_printf("This is %x\n\n", 3735928559u);

	//testing hexadecimal upper
	ft_printf("Testing for specifier X:\n");
	printf("This is %X\n", 3735928559u);
	ft_printf("This is %X\n\n", 3735928559u);

	//testing %
	ft_printf("Testing for specifier %:\n");
	printf("This is %%\n");
	ft_printf("This is %%\n\n");
}
