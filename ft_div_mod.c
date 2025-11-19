#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("div = %d\n", *div);
	printf("mod = %d\n", *mod);
}

int main()
{
	int A, B , div, mod;
	A = 8;
	B = 2;

	ft_div_mod(A, B, &div, &mod);
}

