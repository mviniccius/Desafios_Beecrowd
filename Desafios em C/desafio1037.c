#include <stdio.h>

int main (){

	float num;

  //  printf("Digite um numero float: \n");
    scanf("%f", &num);

    if(num > 25 && num <=50 ){
        printf("Intervalo (25,50]\n");
    }else if(num >= 0 && num <= 25 ){
        printf("Intervalo [0,25]\n");        
    }else if(num > 75 && num <= 100 ){
        printf("Intervalo (75,100]\n");
    }else if(num > 50 && num <=75){
        printf("Intevalo (50,75]\n");
    }
    else
    printf("Fora de intervalo\n");

    
	
	return 0;
}
