void ft_ultimate_div_mod(int a, int b, int *div, int *mod) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	*div = a / b;
	*mod = a % b;
}

	

/*
#include <stdio.h>
int main(void) {
	int a = 12; int b = 5; int div; int mod;

	ft_ultimate_div_mod(a, b, &div, &mod);
}
*/
