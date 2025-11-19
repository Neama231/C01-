#include <unistd.h>

void	ft_putstr(char *str)
{
	write (1, str, 1);
	if (*str)
		ft_putstr(str+1);
}

int main()
{
	char *S;
	S = "HELLO!";
	ft_putstr(S);
}
