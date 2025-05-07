#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" // Include your custom header

void test_ft_printf(void)
{
	int ret_std, ret_ft;

	// 1. Simple strings
	ret_std = printf("STD: Hello, world!\n");
	ret_ft  = ft_printf("FT_: Hello, world!\n");
	printf("Test literal string\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 2. Characters
	ret_std = printf("STD: char = %c\n", 'A');
	ret_ft  = ft_printf("FT_: char = %c\n", 'A');
	printf("Test c\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 3. Strings
	ret_std = printf("STD: str = %s\n", "test");
	ret_ft  = ft_printf("FT_: str = %s\n", "test");
	printf("Test s\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 4. Pointers
	int x = 42;
	ret_std = printf("STD: ptr = %p\n", &x);
	ret_ft  = ft_printf("FT_: ptr = %p\n", &x);
	printf("Test p\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 5. Integers (signed)
	ret_std = printf("STD: int = %d, %i\n", -123, 456);
	ret_ft  = ft_printf("FT_: int = %d, %i\n", -123, 456);
	printf("Test d and i\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 6. Unsigned integers
	ret_std = printf("STD: unsigned = %u\n", 4294967295u);
	ret_ft  = ft_printf("FT_: unsigned = %u\n", 4294967295u);
	printf("Test u\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 7. Hexadecimal (lowercase)
	ret_std = printf("STD: hex = %x\n", 3735928559u);
	ret_ft  = ft_printf("FT_: hex = %x\n", 3735928559u);
	printf("Test x\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 8. Hexadecimal (uppercase)
	ret_std = printf("STD: HEX = %X\n", 3735928559u);
	ret_ft  = ft_printf("FT_: HEX = %X\n", 3735928559u);
	printf("Test X\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 9. Percent symbol
	ret_std = printf("STD: %%\n");
	ret_ft  = ft_printf("FT_: %%\n");
	printf("Test %%\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 10. Edge cases: zero, INT_MIN, INT_MAX
	ret_std = printf("STD: edge = %d, %d\n", INT_MIN, INT_MAX);
	ret_ft  = ft_printf("FT_: edge = %d, %d\n", INT_MIN, INT_MAX);
	printf("Test zero, INT_MIN, INT_MAX\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 11. Null string
	ret_std = printf("STD: null = %s\n", (char *)NULL);
	ret_ft  = ft_printf("FT_: null = %s\n", (char *)NULL);
	printf("Test null string\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);

	// 12. Complex combination
	ret_std = printf("STD: %d %u %x %X %c %s %%\n", -42, 42, 42, 42, 'Z', "combo");
	ret_ft  = ft_printf("FT_: %d %u %x %X %c %s %%\n", -42, 42, 42, 42, 'Z', "combo");
	printf("Test combination\n");
	printf("Return: STD=%d, FT=%d\n\n", ret_std, ret_ft);
}

int	main()
{
	test_ft_printf();
}

