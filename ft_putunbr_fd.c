/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:25:08 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 15:34:38 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunbr_fd(unsigned int n, int fd)
{
	char	value;
	size_t	len;

	value = 0;
	len = 0;
	if (n > 9)
		len += ft_putnbr_fd(n / 10, fd);
	value += n % 10;
	len += write(fd, &value, 1);
	return (len);
}
