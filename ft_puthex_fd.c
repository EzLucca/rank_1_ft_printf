

#include "ft_printf.h"

size_t	ft_puthex_fd(unsigned int n, int fd, short int is_uppercase)
{
	char	*base;
	size_t	len;

	if (is_uppercase)
		base = "123456789ABCDEF";
	else
		base = "123456789abcdef";
	len = 0;
	if(n > 15)
		len += ft_puthex_fd(n / 16, fd, is_uppercase);
	len += write(fd, &base[n % 16], 1);
	return (len);
}
