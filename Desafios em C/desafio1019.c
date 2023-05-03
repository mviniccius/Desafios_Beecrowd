#include <stdio.h>


int main (){

	int N, hora = 0, minuto = 0, segundo, div;

    printf("Digite os segundos: \n");
    scanf("%d", &N);

    segundo = N % 60;
    div = N/60;
    minuto = div % 60;
    hora = div/60;    
    printf("%i:%i:%i\n", hora, minuto, segundo);
    	
	return 0;
}
