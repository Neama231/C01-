#include <stdio.h>
void	swap(int *p1, int *p2);
void	Quick_sort_int_tab(int *tab, int size);
void	recursive_Quicksort(int tab[], int low, int high);
int	partition_swap(int tab[], int low, int high);

int main()
{
	int tab[] = {0,3,5,6,9,7,1};
	int size = 7;
	Quick_sort_int_tab(tab, size);
	int i;
	i = 0;
	while (i < size - 1)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}

void    swap(int *p1, int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void    Quick_sort_int_tab(int *tab, int size)
{
	recursive_Quicksort(tab, 0, size - 1);
}

void	recursive_Quicksort(int *tab, int low, int high)
{
	int pivot_index = partition_swap(tab, low, high);
	if (low < high)
	{
		recursive_Quicksort(tab, low, pivot_index - 1);//left of the pivot down until the low element
		recursive_Quicksort(tab, pivot_index + 1, high);//right of the pivot up until the high element
	}
}

int	partition_swap(int *tab, int low, int high)
{
	int pivot_value = tab[high];//the pivot is the last element in the array
	int i;
	int j;
	i = low;
	j = low;
	while (j < high)
	{
		if (tab[j] <= pivot_value)
		{
			swap(&tab[i], &tab[j]);
			i++;
		}
		j++;
	}
	swap(&tab[i], &tab[high]);
	return i;
}
		
