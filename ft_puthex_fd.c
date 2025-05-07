/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:25:21 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 11:25:23 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex_fd(unsigned int n, int fd, short int check_upper)
{
	char	*base;
	size_t	len;

	if (check_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = 0;
	if(n > 15)
		len += ft_puthex_fd(n / 16, fd, check_upper);
	len += write(fd, &base[n % 16], 1);
	return (len);
}
