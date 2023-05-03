#include <stdio.h>

int main (){

    int A, nA, B, nB;
    float price, priceB, aPagarA, aPagarB, total;

    scanf("%i %i %f", &A, &nA, &price);
    scanf("%i %i %f",&B, &nB, &priceB);

    aPagarA = price * nA;
    aPagarB = priceB * nB;
    total = aPagarB + aPagarA;    
   
    printf("VALOR A PAGAR: R$ %.2f\n", total);

	return 0;
}