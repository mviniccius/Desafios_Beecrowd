#include <stdio.h>

int main (){

	int troco, cem, cinquenta, vinte, dez, cinco, dois, um, moedaCinquenta, moedaVinte, moedaDez, moedaCinco, moedaUm, aux;
    float valor; 

    scanf("%f", &valor);
    //printf("%.2f\n", valor);
	
    troco = valor;    
    aux = (valor*100) - (troco *100);    
	
    printf("NOTAS:\n");

    cem = troco/100;
    //troco = troco - (cem * 100);
    troco = troco % 100;
    printf("%i nota(s) de R$ 100.00\n", cem);
     

    cinquenta = troco / 50;
    //troco = troco - (cinquenta * 50);
    troco = troco % 50;
    printf("%i nota(s) de R$ 50.00\n", cinquenta);
       

    vinte = troco / 20;
    //troco = troco - (vinte * 20);
    troco = troco % 20;
    printf("%i nota(s) de R$ 20.00\n", vinte);
       

    dez = troco / 10;
    //troco = troco - (dez *10);
    troco = troco % 10;
    printf("%i nota(s) de R$ 10.00\n", dez);
        
        
    cinco = troco / 5;
    //troco = troco - (cinco * 5);
    troco = troco % 5;
    printf("%i nota(s) de R$ 5.00\n", cinco);
        

    dois = troco / 2;
    //troco = troco - (dois * 2);
    troco = troco % 2;
    printf("%i nota(s) de R$ 2.00\n", dois);   

    printf("MOEDAS:\n");

    um = troco /1;
    //troco = troco - (um * 1);
    troco = troco % 1;
    printf("%i moeda(s) de R$ 1.00\n", um);      
    

    moedaCinquenta = aux/50;
    aux = aux % 50;  
    printf("%i moeda(s) de R$ 0.50\n", moedaCinquenta);
    

    moedaVinte = aux/25;
    aux = aux % 25;
    printf("%i moeda(s) de R$ 0.25\n", moedaVinte);
    

    moedaDez = aux/10;
    aux = aux % 10;
    printf("%i moeda(s) de R$ 0.10\n", moedaDez);

    moedaCinco = aux/5;
    aux = aux % 5;
    printf("%i moeda(s) de R$ 0.05\n", moedaCinco);
   

    moedaUm = aux/1;
    aux = aux % 1;
    printf("%i moeda(s) de R$ 0.01\n", moedaUm);
  
        
    //printf("AUX: %i\n", aux);
	return 0;
}
