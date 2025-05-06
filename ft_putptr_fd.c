
#include "ft_printf.h"

size_t	ft_putptr_fd(unsigned long long n, int fd)
{
	char	*base;
	size_t	len;

	if (!n)
		return(write(1, "(nil)", 5));
	base = "123456789abcdef";
	len = 0;
	if(n > 15)
		len += ft_putptr_fd(n / 16, fd);
	if(len == 0)
		len += write(fd, "0x", 2);
	len += write(fd, &base[n % 16], 1);
	return (len);
}
