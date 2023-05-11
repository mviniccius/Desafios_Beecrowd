#include <stdio.h>

int main (){

	int a, b, i, soma = 0;

    scanf("%i", &a);
    scanf("%i", &b);

    
    if(a < b){
        for(i = a + 1; i < b; i++){
            if(i % 2 != 0){                
                soma += i;
            }
        }
    }else{
        for(i = b +1; i < a ; i++){
            if(i % 2 != 0){                
                soma += i;
            }
        }
    }


    printf("%i\n", soma);

	
	return 0;
}
