#include <stdio.h>
#include <stdbool.h>

void	swap(int *p1, int *p2)
{
	int A;
	A = *p1;
	*p1 = *p2;
	*p2 = A;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j+1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[] = {2,3,6,7,9,8,0,1,4,5};
	int i = 0;
	int size;
	size = 10;
	ft_sort_int_tab(tab, size);
	
	bool swapped;
	swapped = false;
	do//to improve  the speed of the bubble sort 
	{
		while (i < size - 1)
		{
			printf("tab[%d] = %d\n", i, tab[i]);
			i++;
		}
	}while (swapped);// the loop will stop when the swapped is not turned on (true)
}
