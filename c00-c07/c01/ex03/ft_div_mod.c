void ft_div_mod(int a, int b, int *div, int *mod) {
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main(void) {
	int a = 12; int b = 5; int div; int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d, %d % %d : ", a, b, a, b);
	printf("%d, %d", div, mod);
}
*/
