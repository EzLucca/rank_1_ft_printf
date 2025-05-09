#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" // Include your custom header

void test_ft_printf(void)
{
	int ret_printf, ret_ft_printf;

	// 1. Simple strings
	printf(">>>>>>> Test literal string <<<<<<<\n");
	ret_printf = printf("Official printf: Hello, world!\n");
	ret_ft_printf  = ft_printf("Minha ft_printf: Hello, world!\n");
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 2. Characters
	printf(">>>>>>> Test c <<<<<<<\n");
	ret_printf = printf("Official printf: char = %c\n", 'A');
	ret_ft_printf  = ft_printf("Minha ft_printf: char = %c\n", 'A');
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 3. Strings
	printf(">>>>>>> Test s <<<<<<<\n");
	ret_printf = printf("Official printf: str = %s\n", "test");
	ret_ft_printf  = ft_printf("Minha ft_printf: str = %s\n", "test");
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);
	
	// 4. Pointers
	int x = 42;
	printf(">>>>>>> Test p <<<<<<<\n");
	ret_printf = printf("Official printf: ptr = %p\n", &x);
	ret_ft_printf  = ft_printf("Minha ft_printf: ptr = %p\n", &x);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);
	
	// 5. Integers (signed)
	printf(">>>>>>> Test d and i <<<<<<<\n");
	ret_printf = printf("Official printf: int = %d, %i\n", -123, 456);
	ret_ft_printf  = ft_printf("Minha ft_printf: int = %d, %i\n", -123, 456);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 6. Unsigned integers
	printf(">>>>>>> Test u <<<<<<<\n");
	ret_printf = printf("Official printf: unsigned = %u\n", 4294967295u);
	ret_ft_printf  = ft_printf("Minha ft_printf: unsigned = %u\n", 4294967295u);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 7. Hexadecimal (lowercase)
	printf(">>>>>>> Test x <<<<<<<\n");
	ret_printf = printf("Official printf: hex = %x\n", 3735928559u);
	ret_ft_printf  = ft_printf("Minha ft_printf: hex = %x\n", 3735928559u);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 8. Hexadecimal (uppercase)
	printf(">>>>>>> Test X <<<<<<<\n");
	ret_printf = printf("Official printf: HEX = %X\n", 3735928559u);
	ret_ft_printf  = ft_printf("Minha ft_printf: HEX = %X\n", 3735928559u);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 9. Percent symbol
	printf(">>>>>>> Test %% <<<<<<<\n");
	ret_printf = printf("Official printf: %%\n");
	ret_ft_printf  = ft_printf("Minha ft_printf: %%\n");
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 10. Edge cases: zero, INT_MIN, INT_MAX
	printf(">>>>>>> Test zero, INT_MIN, INT_MAX <<<<<<<\n");
	ret_printf = printf("Official printf: edge = %d, %d\n", INT_MIN, INT_MAX);
	ret_ft_printf  = ft_printf("Minha ft_printf: edge = %d, %d\n", INT_MIN, INT_MAX);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 11. Null string
	printf(">>>>>>> Test null string <<<<<<<\n");
	ret_printf = printf("Official printf: null = %s\n", (char *)NULL);
	ret_ft_printf  = ft_printf("Minha ft_printf: null = %s\n", (char *)NULL);
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 12. Complex combination
	printf(">>>>>>> Test combination <<<<<<<\n");
	ret_printf = printf("Official printf: %d %u %x %X %c %s %%\n", -42, 42, 42, 42, 'Z', "combo");
	ret_ft_printf  = ft_printf("Minha ft_printf: %d %u %x %X %c %s %%\n", -42, 42, 42, 42, 'Z', "combo");
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	// 13. Different specifier
	printf(">>>>>>> Test specifier h <<<<<<<\n");
	ret_printf = printf("Official printf: %h to %w be tested %y\n", "combo", "combo", "combo");
	ret_ft_printf  = ft_printf("Minha ft_printf: %h to %w be tested %y\n", "combo", "combo", "combo");
	printf("Return: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);
}

int	main()
{
	test_ft_printf();
}

