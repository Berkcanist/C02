#include <stdio.h>
#include "ft_strcapitalize.c"
int	main()
{
	char a[] = "salut, comment tu vas ?mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(a));
}
