int ft_swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int main(void) {
	int a = 0; int b = 4;
	int* ptra = &a; int* ptrb = &b;

	ft_swap(ptra, ptrb);

	printf("%d, %d", a, b);
}
*/
