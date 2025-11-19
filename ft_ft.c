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

/*
int main()
{
	int n;
	char c;
	n = 8;
	if (n > 0 && n < 10)
	{
		c = n + '0';

	write (1, &c, 1);
	}
	else {
		c = (n / 10) + '0';
 		write (1, &c, 1);
		c = (n % 10) + '0';
 		write (1, &c, 1);
	}
}
*/

