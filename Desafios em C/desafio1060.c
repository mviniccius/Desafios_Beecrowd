#include <stdio.h>

int main (){

	float vet [6];
    int i, cont = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &vet[i]);
        if(vet[i] > 0){
            cont++;
        }
        if(vet[i]==0){
            i--;
        }
    }
	printf("%i valores positivos\n", cont);
	return 0;
}
