#include <stdio.h>

int main (){

	int vet [5], i, contPar = 0, contImpar = 0, positivo = 0, negativo = 0;


    for(i = 0; i < 5; i++){
        scanf("%i", &vet[i]);
        if(vet[i] % 2 == 0){
            contPar++;            
        }else{
            contImpar++;            
        }
        if(vet[i] > 0){
            positivo++;
        }
        if(vet[i] < 0){
            negativo++;
        }   

    }
    
	printf("%i valor(es) par(es)\n", contPar);  
    printf("%i valor(es) impar(es)\n", contImpar);
    printf("%i valor(es) positivo(s)\n", positivo);
    printf("%i valor(es) negativo(s)\n", negativo); 


	return 0;
}
