#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, n;
	
	printf("\n\nDigite o primeiro número:");
	scanf("%d", &x);
	printf("\n\nDigite o segundo número:");
	scanf("%d", &n);
	
	if (n<0) {
		printf("Somente n maior que 0\nEncerre e informe novamente.");
		if()
	}
	
	return 0;
}
