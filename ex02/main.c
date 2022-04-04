#include <stdio.h>
#include "ft_str_is_alpha.c"

int	main()
{
	char a[] = "HelloWorld";
	char b[] = "Hello World!";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d", ft_str_is_alpha(b));
}	
