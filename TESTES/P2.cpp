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
		printf("PARAB�NS IDADE � �MPAR, LOGO VOC�S GANHARAM DESCONTO.");
	}
	if ((idade1%2 == 0)||(idade1%2 == 0)){
	printf("DESCULPE SUAS IDADES S�O PARES, LOGO VOC�S N�O GANHARAM DESCONTO.");
	}
	return 0;
}
