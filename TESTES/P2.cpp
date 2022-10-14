#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("DESCONTO DO CASAL\n\n");
	
	int idade1, idade2;
	
	printf("Digite sua idade-1: ");
	scanf("%d", &idade1);
	printf("Digite sua idade-2: ");
	scanf("%d", &idade2);
	
	if ((idade1%2) != 0 || (idade2%2 != 0)) {
		printf("PARABÉNS IDADE É ÍMPAR, LOGO VOCÊS GANHARAM DESCONTO.");
	}
	if ((idade1%2 == 0)||(idade1%2 == 0)){
	printf("DESCULPE SUAS IDADES SÃO PARES, LOGO VOCÊS NÃO GANHARAM DESCONTO.");
	}
	return 0;
}
