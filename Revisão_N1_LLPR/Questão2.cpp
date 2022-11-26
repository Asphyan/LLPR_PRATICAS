#include <stdio.h>
#include <locale.h>

int main() { 
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n, a, num;
	
	printf("SOMADOR DOS ANTERIORES DO NÚMERO ESPECIFICADO\n\n");
	
	printf("Digite o número: ");
	scanf("%d", &a);
	
	for(int n; n<=a ; n++) {
		num=n*(n+1)/2;
	}
    	printf("\nResultado: %d", num);
    	return 0;
}
