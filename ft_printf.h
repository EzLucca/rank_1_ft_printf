/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:43:56 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/06 13:47:42 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H__
# define __FT_PRINTF_H__

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);

size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putnbr_fd(int n, int fd);
size_t	ft_putstr_fd(char *s, int fd);
size_t	ft_putunbr_fd(unsigned int n, int fd);
size_t	ft_puthex_fd(unsigned int n, int fd, short int is_uppercase);
size_t	ft_putptr_fd(unsigned long long n, int fd);

#endif // !__FT_PRINTF_H__
