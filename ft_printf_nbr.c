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
		return (ft_print_str("-2147483648"));
	if (n < 0)
	{
		count = ft_print_char('-');
		if (count == -1)
			return (-1);
		value += count;
		n = -n;
	}
	if (n > 9)
	{
		count = ft_print_snbr(n / 10);
		if (count == -1)
			return (-1);
		value += count;
	}
	count = ft_print_char((n % 10) + '0');
	if (count == -1)
		return (-1);
	value += count;
	return (value);
}
