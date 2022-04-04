#include <stdio.h>
#include "ft_strlowcase.c"

int	main()
{
	char a[] = "ABCDEF 1 ";
	char b[] = "A1BCDEF_";
	char c[] = "";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
}

