#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("a = %d\n", *a);// the asterisk gives u access to the value the pointer points to
	printf("b = %d\n", *b);
}
int main()
{
	int A = 2;
	int B = 9;
	ft_swap(&A, &B);//the & symbol means the address of A in the memory
}
