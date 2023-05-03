#include <stdio.h>

int main (){

	int valor, troco, cem, cinquenta, vinte, dez, cinco, dois, um;
     

    scanf("%i", &valor);
    printf("%i\n", valor);
	troco = valor;
	
    cem = troco/100;
    troco = troco - (cem * 100);
    printf("%i nota(s) de R$ 100,00\n", cem);
     

    cinquenta = troco / 50;
    troco = troco - (cinquenta * 50);
    printf("%i nota(s) de R$ 50,00\n", cinquenta);
       

    vinte = troco / 20;
    troco = troco - (vinte * 20);
    printf("%i nota(s) de R$ 20,00\n", vinte);
       

    dez = troco / 10;
    troco = troco - (dez *10);
    printf("%i nota(s) de R$ 10,00\n", dez);
        
        
    cinco = troco / 5;
    troco = troco - (cinco * 5);
    printf("%i nota(s) de R$ 5,00\n", cinco);
        

    dois = troco / 2;
    troco = troco - (dois * 2);
    printf("%i nota(s) de R$ 2,00\n", dois);   
        
    um = troco /1;
    troco = troco - (um * 1);
    printf("%i nota(s) de R$ 1,00\n", um);
        

        
	return 0;
}
