/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:41:36 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/05 16:18:34 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

// TODO: %c for characters 
// ft_putchar
// TODO: %s for strings
// ft_putstring
// TODO: %p for void pointers in hexadecimal format
// TODO: %d for numbers in decimal base
// TODO: %i for integer in decimal base
// TODO: %u for unsigned decimal base number
// TODO: %x for number in hexdecimal base lowercase format
// TODO: %X for number in hexdecimal base uppercase format
// TODO: %% for % sign

int ft_printf(const char *format, ...)
{
	va_list args;
	int i;

	i = 0;
	va_start(args, format);

	while (format[i])
	{

		i++;
	}

	va_end(args);
}
