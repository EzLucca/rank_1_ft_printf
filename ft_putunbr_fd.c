

#include "ft_printf.h"

// Outputs the integer ’n’ to the specified file descriptor.

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
