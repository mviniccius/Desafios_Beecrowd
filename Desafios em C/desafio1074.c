#include <stdio.h>

int main (){

	int N, numero, i;

	scanf("%i", &N);

	for(i = 0; i < N; i++){
		scanf("%i", &numero);
        if(numero == 0){
            printf("NULL\n");
        }else if(numero % 2 == 0){
			if (numero > 0){
				printf("EVEN POSITIVE\n");
			}else printf("EVEN NEGATIVE\n");			
		}else{
			if (numero > 0){
				printf("ODD POSITIVE\n");
			}else
			printf("ODD NEGATIVE\n");
		}

	}


	
	return 0;
}
