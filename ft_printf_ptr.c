/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:25:33 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 11:25:34 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// -TODO: Revisar
int	ft_print_ptr(unsigned long long n)
{
	char	*base;
	size_t	len;

	if (!n)
		return(write(1, "(nil)", 5));
	base = "0123456789abcdef";
	len = 0;
	if(n > 15)
		len += ft_print_ptr(n / 16);
	if(len == 0)
		len += write(1, "0x", 2);
	len += write(1, &base[n % 16], 1);
	return (len);
}
