#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese_Bazil");
	
	printf("\n\nConversor De Minutos Para Segundos");
	
	int min, minutos;
	
	Printf("Digite os minutos a serem convertidos: ");
	scanf("%d", min);
	
	minutos= min*60;
	
	printf("Sua Conversão foi igual a: %d", minutos);
	
	return 0;
}
