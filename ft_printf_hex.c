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
#include <inttypes.h>

// -TODO: Revisar

int ft_print_base(unsigned long nbr, unsigned long base, char *str)
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
		return (ft_print_base(hex, 16, "0123456789ABCDEF"));
	return (ft_print_base(hex, 16, "0123456789abcdef"));
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
	 return (ft_print_base(unbr, 10, "0123456789"));
}

// -TODO: Can I putnbr here?
// int	ft_print_snbr(long int snbr)
// {
// 	 return (ft_print_base(snbr, 10, "0123456789"));
// }
