#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int n;
	int *n1, **n2, ***n3, ****n4, *****n5, ******n6, *******n7, ********n8, *********n9;
	n9 = &n8;
	n8 = &n7;
	n7 = &n6;
	n6 = &n5;
	n5 = &n4;
	n4 = &n3;
	n3 = &n2;
	n2 = &n1;
	n1 = &n;

	printf("please enter a value for n : ");
	scanf("%d", &n);
	sleep(2);
	//printf("the value of n is ===> %d\n", n);
	printf("answer incorrect dumbass! =:)\n");
	sleep(2);
	//nb = n;
	ft_ultimate_ft(n9);
	printf("the value of n is ===> %d biiitch\n", n);
	sleep(2);
}
