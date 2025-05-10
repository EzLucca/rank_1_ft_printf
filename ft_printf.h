/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:43:56 by edlucca           #+#    #+#             */
/*   Updated: 2025/05/10 16:20:51 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

//-------------Define Macros-------------//

# define SPECIFIERS "cspdiuxX%"
# define HEXUP "0123456789ABCDEF"
# define HEXDN "0123456789abcdef"
# define DECIMAL "0123456789"

/**
 * @brief: This function writes out the output according to a specific format. 
 * @param format: The character to output.
 * @return: `int` number of characters (bytes) written.
 */
int		ft_printf(const char *format, ...);

/**
 * @brief: This function writes the character `c` as a char format.
 * @param c: The character to output.
 * @return: `int` number of characters (bytes) written.
 */
int		ft_print_char(char c);

/**
 * @brief: Outputs a string of signed chars.
 * @param s: The string to output.
 * @return: `int` number of characters (count) written.
 */
int		ft_print_str(char *s);

/**
 * @brief: Output the address of a pointer. 
 * @param pointer: The void pointer to have its address outputed.
 * @return: `int` Number of characters that are written.
 */
int		ft_print_ptr(void *pointer);

/**
 * @brief: This function writes the int `n`.
 * @param nbr: The character to output.
 * @return: `int` number of characters (bytes) written.
 */
int		ft_print_snbr(long nbr);

/**
 * @brief: Outputs the number of unsigned integer.
 * @param unbr: The string to output.
 * @return: `int` Number of characters that are written.
 */
int		ft_print_unbr(unsigned int unbr);

/**
 * @brief: Outputs an unsigned integer as hexadecimal.
 * @param n: The unsigned integer to output.
 * @param hex: The hexadecimal number to be outputed. 
 * @param check_upper: Non zero value to quick check if it is uppercase. 
 * @return: `int` Number of characters that are written.
 */
int		ft_print_hex(unsigned long hex, int check_upper);

/**
 * @brief: Will find the char `c` in the string `s`.
 * @param s: The string to be searched.
 * @param c: the char to be founded in the string `s`.
 * @return: the first char `c` found in string `s`.
 */
char	*ft_strchr(const char *s, int c);

#endif
