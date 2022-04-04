#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main()
{
	char a[] = "abcdefg ";
	char b[] = "a1bcdef";
	char c[] = "";

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
}
