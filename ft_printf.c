/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:41:36 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 17:14:15 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -TODO: Revisar
#include "ft_printf.h"

int	format_specifier(const char *format, va_list *arg_ptr)
{
	int count;

	count = 0;
	if (*format == 'c')
		count += ft_print_char(va_arg(*arg_ptr, int));
	else if (*format == 's')
		count += ft_print_str(va_arg(*arg_ptr, char*));
	else if (*format == 'p')
		count += ft_print_ptr(va_arg(*arg_ptr, int));
	else if (*format == 'd' || *format == 'i')
		count += ft_print_snbr(va_arg(*arg_ptr, int));
	else if (*format == 'u')
		count += ft_print_unbr(va_arg(*arg_ptr, unsigned int));
	else if (*format == 'x' || *format == 'X')
		count += ft_print_hex(va_arg(*arg_ptr, long long int), *format == 'X');
	else if (*format == '%')
		count += ft_print_char('%');
	if (*format == '\0')
		return (-1);
	return (count);
}

// Helper function to validation 
static char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}

// Check if the format is valid
static short	int format_validation(const char *format)
{
	if (ft_strchr(SPECIFIERS, *format) != 0)
		return (1);
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list arg_ptr;
	int	len;

	va_start(arg_ptr, format);
	if (!format)
		return (-1);
	len = 0;
	while (*format)
	{
		if (*format == '%' && format_validation(format + 1) != 0 && format++)
		{
			len += format_specifier(format, &arg_ptr);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(arg_ptr);
	return(len);
}
