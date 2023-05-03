#include <stdio.h>

int main (){

	int vet [5], i, cont = 0;


    for(i = 0; i < 5; i++){
        scanf("%i", &vet[i]);
        if(vet[i] % 2 == 0){
            cont++;            
        }        
    }
    
	printf("%i valores pares\n", cont);   
	return 0;
}
