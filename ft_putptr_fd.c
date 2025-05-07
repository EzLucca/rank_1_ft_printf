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

size_t	ft_putptr_fd(unsigned long long n, int fd)
{
	char	*base;
	size_t	len;

	if (!n)
		return(write(fd, "(nil)", 5));
	base = "0123456789abcdef";
	len = 0;
	if(n > 15)
		len += ft_putptr_fd(n / 16, fd);
	if(len == 0)
		len += write(fd, "0x", 2);
	len += write(fd, &base[n % 16], 1);
	return (len);
}
