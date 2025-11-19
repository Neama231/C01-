#include <unistd.h>

void	ft_swap(int *tab1, int *tab2)
{
	int tmp;
	tmp = *tab1;
	*tab1 = *tab2;
	*tab2 = tmp;
	write (1, &(*tab1), 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int div;
	int i;
	div = size/2;
	i = 0;
	while (--div)
	ft_swap(&(tab[++i]), &(tab[--size]));
}

int main()
{
	int tab[5] = {12, 22, 44, 66, 77};
	int size = 5;
	ft_rev_int_tab(tab, size);
}

