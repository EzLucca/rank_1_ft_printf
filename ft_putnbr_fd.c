/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:42:36 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 17:24:04 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	int	value;

	value = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			return (write(fd, "-", 1));
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		value = n % 10 + '0';
		return (write(fd, &value, 1));
	}
}
