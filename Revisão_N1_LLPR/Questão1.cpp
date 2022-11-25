#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, num;
	
	printf("ELEVANDO OS NÚMEROS\n\n");
	
	for(int x; x <= 10; x++){
		num=x*x;
		printf("%d X %d = %d\n", x,x, num);
	}
	return 0;
}
