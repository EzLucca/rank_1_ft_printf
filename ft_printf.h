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
// -TODO:Revisar comentarios
int ft_printf(const char *format, ...);

/*
 * @brief: This function writes the character `c` to the given file 
 * descriptor `fd`.
 *
 * @param c: The character to output.
 *
 * @return: `size_t` Number of characters written.
*/
int	ft_print_char(char c);

/*
 * @brief: This function writes the int `n` to the given file descriptor `fd`
 *
 * @param n: The character to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` number of characters written.
*/
int	ft_print_snbr(int n);

/*
 * @brief: Outputs a string to the file descriptor.
 *
 * @param s: The string to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` Number of characters that are written.
*/
int	ft_print_str(char *s);

/*
 * @brief: Outputs the number of unsigned integer to the file descriptor.
 *
 * @param n: The unsigned integer to output.
 * @param fd: The file descriptor to which the character is written.
 *
 * @return: `size_t` Number of characters written.
*/
int	ft_print_unbr(unsigned int n);


/*
 * @brief: Outputs an unsigned integer as hexadecimal to the file descriptor.
 *
 * @param n: The unsigned integer to output.
 * @param fd: The file descriptor to which the character is written.
 * @param is_uppercase: Non zero value to quick check if it is uppercase. 
 *
 * @return: `size_t` Number of characters written.
*/
int	ft_print_hex(unsigned int n, short int is_uppercase);


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
int	ft_print_ptr(unsigned long long n);

#endif
