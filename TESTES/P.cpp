#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade, f1;

	printf("LEITOR DE IDADE\n\n");
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	f1=idade*2;

	if (idade%2 != 0) {
		printf("Parabéns idade sua idade é ÍMPAR");
	}
	if (idade%2 == 0) {
		printf("Parabéns sua idade é PAR\n");
		printf("O dobro da sua idade é: %d\n", f1);
	}
	if (idade >= 18){
		printf("Parabéns você é maior de idade\n");
	}
	if (idade < 18){
		printf("Parabéns você é menor de idade\n\n");
	}
    return 0;
}
