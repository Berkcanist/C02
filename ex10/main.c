#include <stdio.h>
#include "ft_strlcpy.c"
int	main()
{
	char a[] = "berkcan";
	char b[] = "demir";

	ft_strlcpy(b, a, 4);
	printf("%s", b);
	return (0);
}
