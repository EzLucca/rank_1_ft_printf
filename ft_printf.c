/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:41:36 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/06 14:16:09 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int specifier_format(char specifier, va_list arg_ptr, size_t len)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == 'p')
		// TODO: function for void * argument has to be printed in hexadecimal format
		count += ft_putchar_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == 'd')
		// TODO: Function to print decimal base number
		count += ft_putnbr_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == 'i')
		// TODO: Function to print integer base number
		count += ft_putnbr_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == 'u')
		// TODO: Function to print unsigned decimal base number
		count += ft_putnbr_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == 'x' || specifier == 'X')
		// TODO: Function to print number in hexadecimal lowercase format
		count += ft_puthex_fd(va_arg(arg_ptr, int), 1);
	else if (specifier == '%')
		// TODO: Function to print a percent sign
		count += ft_putchar_fd(va_arg(arg_ptr, int), 1);
	else
		return (-1);
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list arg_ptr;
	size_t	len;

	va_start(arg_ptr, format);
	if (!format)
		return (-1);
	len = 0;
	while (*format)
	{
		if (*format == '%' && format_is_valid (format + 1) != 0) // TODO: format_is_valid
		{
			format++;
			len += specifier_format(*format, arg_ptr, &len);
		}
		else
		len += write(1, format, 1);
		if (len == -1)
			break ;
		format++;
	}
	va_end(arg_ptr);
	return(len);
}
