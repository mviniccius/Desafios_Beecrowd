#include <stdio.h>

int main (){

	float vet [6], cont = 0, soma = 0, media;
    int i;

    for(i = 0; i < 6; i++){
        scanf("%f", &vet[i]);
        if(vet[i] > 0){
            cont++;
            soma = soma + vet[i];
        }
        if(vet[i]==0){
            i--;
        }
    }
    media = soma / cont;
	printf("%.0f valores positivos\n", cont);
    printf("%.1f\n", media);
	return 0;
}
