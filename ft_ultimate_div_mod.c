#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
	printf("a = %d\n", *a);
	printf("b = %d\n", *b);
}

int main()
{
	int A, B;
	A = 3;
	B = 6;
	ft_ultimate_div_mod(&A, &B);//pass the address of A and B
}
