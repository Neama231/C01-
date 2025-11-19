//#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;

}

int main (void)
{
	int n;
	n = 1337;
	printf("the value befor ===> %d\n", n);
	ft_ft(&n);
	printf("the value after ===> %d\n", n);
}

