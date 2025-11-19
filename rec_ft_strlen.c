#include <stdio.h>

int	ft_strlen(char *str)
{
	if (*str == 0)
		return 0;

	return (1 + ft_strlen(str + 1));
}

int main()
{
	printf("length is : %d\n", ft_strlen("HELLO"));
}
