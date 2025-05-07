/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:43:56 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/07 11:34:22 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H__
# define __FT_PRINTF_H__

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define SPECIFIERS "cspdiuxX%"

int ft_printf(const char *format, ...);

/*
 * @brief: This function writes the character `c` to the given file 
 * descriptor `fd`.
 *
 * @param c: The character to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` Number of characters written.
*/
size_t	ft_putchar_fd(char c, int fd);

/*
 * @brief: This function writes the int `n` to the given file descriptor `fd`
 *
 * @param n: The character to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` number of characters written.
*/
size_t	ft_putnbr_fd(int n, int fd);

/*
 * @brief: Outputs a string to the file descriptor.
 *
 * @param s: The string to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` Number of characters that are written.
*/
size_t	ft_putstr_fd(char *s, int fd);

/*
 * @brief: Outputs the number of unsigned integer to the file descriptor.
 *
 * @param n: The unsigned integer to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` Number of characters written.
*/
size_t	ft_putunbr_fd(unsigned int n, int fd);


/*
 * @brief: Outputs an unsigned integer as hexadecimal to the file descriptor.
 *
 * @param n: The unsigned integer to output.
 * @param fd: The file descriptor to which the character is written.
 * @param is_uppercase: Non zero value to quick check if it is uppercase. 
 *
 * @return: `size_t` Number of characters written.
*/
size_t	ft_puthex_fd(unsigned int n, int fd, short int is_uppercase);


/*
 * @brief: Outputs the memory address in a hexadecimal format to the file
 * descriptor.
 *
 * It is used long long to ensure that the would be enough to hold a value
 * of a pointer in 64-bits systems. 
 *
 * @param n: The unsigned long long integer to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` Number of characters written.
*/
size_t	ft_putptr_fd(unsigned long long n, int fd);

#endif
