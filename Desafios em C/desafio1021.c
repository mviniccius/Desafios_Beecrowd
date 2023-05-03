#include <stdio.h>


int main (){
/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

*/


	int resto, valor, cem, cinquenta, vinte, dez, cinco, dois, moedaCem, 
        moedaCinquenta, moedaVinte, moedaDez, moedaCinco, moedaUm, aux, aux2;

    float N;

  // printf("Digite o valor: \n");
    scanf("%f", &N);

    aux = N * 100;
    valor = aux;
    

  //  printf("\nAUXILIAR: %i\n", aux);
 //   printf("\nvalor: %i\n", valor);
   
   
    cem = valor / 10000;
    valor = valor - (cem * 10000);
    
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", cem); 
   // printf("valor: %i\n\n", valor);
   
   
    cinquenta = valor / 5000;
    valor = valor - (cinquenta * 5000);
    
    printf("%i nota(s) de R$ 50.00\n", cinquenta);
   // printf("valor: %i\n", valor);

    vinte = valor / 2000;
    valor = valor - (vinte * 2000);    

    printf("%i nota(s) de R$ 20.00\n", vinte); 
//    printf("valor: %i\n", valor);    

    dez = valor / 1000;
    valor = valor - (dez * 1000);   

    printf("%i nota(s) de R$ 10.00\n", dez); 
  //  printf("valor: %i\n", valor);
    
    cinco = valor / 500;
    valor = valor - (cinco * 500);   

    printf("%i nota(s) de R$ 5.00\n", cinco); 
  //  printf("valor: %i\n", valor);
    

    dois = valor / 200;
    valor = valor - (dois * 200);

    printf("%i nota(s) de R$ 2.00\n", dois); 
  //  printf("valor: %i\n", valor);   
    
    moedaUm = valor / 100;
    valor = valor - (moedaUm * 100);

    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", moedaUm); 
  //  printf("valor: %i\n", valor);
  
    moedaCinquenta = valor / 50;
    valor = valor - (moedaCinquenta * 50);   

    printf("%i moeda(s) de R$ 0.50\n", moedaCinquenta);
 //   printf("VALOR: %i\n", valor);
    
    moedaVinte = valor / 25;
    valor = valor - (moedaVinte * 25);

    printf("%i moeda(s) de R$ 0.25\n", moedaVinte);
  //  printf("VALOR: %i\n", valor);

    moedaDez = valor / 10;
    valor = valor - (moedaDez * 10);

    printf("%i moeda(s) de R$ 0.10\n", moedaDez);
   // printf("VALOR: %i\n", valor);

    moedaCinco = valor / 5;
    valor = valor - (moedaCinco * 5);

    printf("%i moeda(s) de R$ 0.05\n", moedaCinco);
   // printf("VALOR: %i\n", valor);

    moedaUm = valor / 1;
    
    printf("%i moeda(s) de R$ 0.01\n", moedaUm);
   // printf("VALOR: %i\n", valor);





	return 0;
}
