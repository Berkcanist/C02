#include <stdio.h>
#include "ft_strupcase.c"

int	main()
{
	char a[] = "abcdefg ";
	char b[] = "a1bcdef";
	char c[] = "";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
}
