//checar o retorno de getchar() != EOF é 1 ou 0

#include <stdio.h>

int main(){

	int c;
	c = getchar();
	
	int b = c != EOF;

	printf("%d", b);
}
