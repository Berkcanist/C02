#include <stdio.h>
#include "ft_strncpy.c"

int	main()
{
	char a[] = "berkcan";
	char b[] = "demir";

	printf("%s", ft_strncpy(b, a, 3));
}
