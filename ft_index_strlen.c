#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int main()
{
	char *S;
	S = "HELLO motherfuckers!:<3";
	printf("the length of (%s) is : %d\n", S, ft_strlen(S));
}

