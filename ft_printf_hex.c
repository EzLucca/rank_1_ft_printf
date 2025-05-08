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

// -TODO: Revisar

static int ft_print_base(unsigned long nbr, unsigned int base, char *str)
{
	int index;
	int len;
	int total;

	len = 0;
	total = 0;
	if(nbr > (base - 1))
	{
		len = ft_print_base(nbr / base, base, str);
		if (len == -1)
			return (-1);
		total += len;
	}
	index = nbr % base;
	len = write(1, &str[index], 1);
	total += len;
	if (len == -1)
		return (-1);
	return(total);
}

int	ft_print_hex(unsigned long hex, int check_upper)
{
	if(check_upper)
		return (ft_print_base(hex, 16, HEXUP));
	return (ft_print_base(hex, 16, HEXDN));
}

int	ft_print_ptr(void *unbr)
{
	int len;

	if(!unbr)
		return (ft_print_str("(nil)"));
	len = write(1, "0x", 2);
	if (len == -1)
		return (-1);
	len += ft_print_hex(((unsigned long)unbr), 0);
	return ((uintptr_t)len);
}

int	ft_print_unbr(unsigned int unbr)
{
	 return (ft_print_base(unbr, 10, DECIMAL));
}

int ft_print_snbr(long nbr)
{
	int count = 0;
	int res;

	if (nbr == -2147483648)
		return (ft_print_str("-2147483648"));
	if (nbr < 0)
	{
		res = write(1, "-", 1);
		if (res == -1)
			return (-1);
		count += res;
		nbr = -nbr;
	}
	res = ft_print_base((unsigned long)nbr, 10, DECIMAL);
	if (res == -1)
		return (-1);
	count += res;
	return (count);
}
