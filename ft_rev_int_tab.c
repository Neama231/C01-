#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	i = 0;
	int nb;
	while (i <= size/2)
	{
		nb = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = nb;
		i++;
	}
}

int main()
{
        int tab[5] = {12, 22, 44, 66, 77};
        int size = 5;
	int i;
        ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
