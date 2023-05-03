#include <stdio.h>

int main (){

	int entrada,resto, ano, mes , dia;

	scanf("%i", &entrada);

	ano = entrada/360;
    mes = (entrada%365)/30;
    dia = (entrada%365)%30;

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);	
	
	return 0;
}