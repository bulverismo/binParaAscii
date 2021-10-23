#include<stdio.h>

int main() {

	int bit;
	int soma=0;
	int valor_posicional=128;

	bit = getchar();
	
	while( bit != EOF ) { 
		if ( bit != '\n' ) {
			soma+=(bit - '0') * valor_posicional;
			valor_posicional=valor_posicional>>1;
		}
		if ( bit == ' ' || bit == EOF || bit == '\n' ) {
			printf("%c", soma );
			valor_posicional=128;
			soma = 0;
		}
		bit = getchar();
	}
	return 0;
}
