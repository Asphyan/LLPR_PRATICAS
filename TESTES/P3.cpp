#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("MEIA ENTRADA\n\n");
	
	int idade, estudante;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Você é estudante?\n\nDigite 1 - SIM \t\t 0 - NÃO: ");
	scanf("%d", &estudante);
	
	if ((idade <= 65) && (estudante)) {
		printf("PARABÉNS!!! TOMA A MEIA ENTRADA :D");
	}
	
	return 0;
}
