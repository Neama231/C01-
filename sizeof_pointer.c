#include <stdio.h>

void	sizeof_pointer(void)
{
	int	*nbr;
	char	*c;
	double	*nb;

	printf("the size of *int : %zu bytes\n", sizeof(nbr));
	printf("the size of *char : %zu bytes\n", sizeof(c));
	printf("the size of *double : %zu bytes\n", sizeof(nb));
}

int main(void)
{
	sizeof_pointer();
}
