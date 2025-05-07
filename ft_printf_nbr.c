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

// -TODO: Revisar
int	ft_print_snbr(int n)
{
	int	value;
	int count;

	value = 0;
	count = 0;
	if (n == -2147483648)
	{
		return (ft_print_str("-2147483648"));
	}
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_print_snbr(n / 10);
	value = n % 10 + '0';
	count += write(1, &value, 1);
	return (count);
}

int	ft_print_unbr(unsigned int n)
{
	char	value;
	size_t	len;

	value = 0;
	len = 0;
	if (n > 9)
		len += ft_print_unbr(n / 10);
	value += n % 10;
	len += write(1, &value, 1);
	return (len);
}
