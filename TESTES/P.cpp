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
		printf("Parab�ns idade sua idade � �MPAR");
	}
	if (idade%2 == 0) {
		printf("Parab�ns sua idade � PAR\n");
		printf("O dobro da sua idade �: %d\n", f1);
	}
	if (idade >= 18){
		printf("Parab�ns voc� � maior de idade\n");
	}
	if (idade < 18){
		printf("Parab�ns voc� � menor de idade\n\n");
	}
    return 0;
}
