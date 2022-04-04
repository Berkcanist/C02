#include <stdio.h>
#include "ft_str_is_printable.c"

int	main()
{
	char a[] = "abcdefg ";
	char b[] = "\t";
	char c[] = "\n";

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
}
