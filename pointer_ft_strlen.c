#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while (*(str + i))//at every iteration the value of i is (*4) cuz i is an int (pointer arithmetic)
		++i;
	return (i);
}

int main()
{
	char *s;
	s = "hello";
	printf("%d\n", ft_strlen(s));
}
