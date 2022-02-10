#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_ultimate_div_mod(int *a, int *b);
void 	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	//ex00

	int number = 10;
	int *nbr = &number;
	ft_ft(nbr);
	printf("\n");

	//ex01

	int i = 3;
	int *i1 = &i;
	int **i2 = &i1;
	int ***i3 = &i2;
	int ****i4 = &i3;
	int *****i5 = &i4;
	int ******i6 = &i5;
	int *******i7 = &i6;
	int ********i8 = &i7;
	int *********i9 = &i8;

	printf("%d\n", *********i9);
	ft_ultimate_ft(i9);
	printf("%d\n", *********i9);
	printf("\n");

	//ex02

	int a = 3;
	int b = 4;
	int *a_ptr = &a;
	int *b_ptr = &b;

	printf("%d valor de a, %d valor de b\n", *a_ptr, *b_ptr);
	ft_swap(a_ptr, b_ptr);
	printf("%d valor de a, %d valor de b\n", *a_ptr, *b_ptr);
	printf("\n");

	//ex03

	int a2 = 4;
	int b2 = 2;
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;
	ft_div_mod(a2, b2, div, mod);
	printf("%i, a\n", a2);
	printf("%i, b\n", b2);
	printf("%i, a / b\n", *div);
	printf("%i, a mod  b\n", *mod);

	//ex04

	int a3 = 4;
	int b3 = 2;
	int *aptr = &a3;
	int *bptr = &b3;
	printf("%i, a\n%i, b\n", a3, b3);
	ft_ultimate_div_mod(aptr, bptr);
	printf("%i, a\n%i, b\n", a3, b3);
	printf("\n");
		
	//ex05

	ft_putstr("Hi");
	printf("\n");

	//ex06

	int size = ft_strlen("H");	
	printf("%i\n", size);
	printf("\n");
	
	//ex07 e ex08

	int *tab;

	tab = malloc(sizeof(int) * 3);

	tab[0] = 5;
	tab[1] = 9;
	tab[2] = 1;
	tab[3] = 7;

	ft_rev_int_tab(tab, 4);

	printf("reversed:\n");
	printf("%i\n", *tab);
	printf("%i\n", *(tab + 1));
	printf("%i\n", *(tab + 2));
	printf("%i\n", *(tab + 3));
	
	printf("\n");

	ft_sort_int_tab(tab, 4);
	
	printf("sorted\n");
	printf("%i\n", *tab);
	printf("%i\n", *(tab + 1));
	printf("%i\n", *(tab + 2));
	printf("%i\n", *(tab + 3));

}
