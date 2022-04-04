#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main()
{
	char a[] = "abcdefg";
	char b[] = "ABCDEF ";
	char c[] = "";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	printf("%d\n", ft_str_is_uppercase(c));
}
