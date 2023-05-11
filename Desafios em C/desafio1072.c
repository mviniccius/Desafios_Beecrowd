#include <stdio.h>

int main (){

	int N,valorTeste, in= 0, out = 0;

	scanf("%i", &N);

	for(int i = 0; i < N; i++){
		scanf("%i", &valorTeste);
		if(valorTeste >=10 && valorTeste <= 20){
            in++;
		}else{
            out++;
        }
	}

    printf("%i in\n", in);
    printf("%i out\n", out);



	
	return 0;
}
