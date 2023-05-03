#include <stdio.h>

int main (){

	int num, i = 0;

    scanf("%i", &num);
    

    if(num % 2 != 0){
       num = num + 1;
    for(i = num; i < (num+12); i++){
        if(i % 2 != 0){
            printf("%i\n", i);
        }
    }
    }
    else{
            for(i = num; i <= (num+12); i++){
            if(i % 2 != 0){
            printf("%i\n", i);
        }
    }

    }
    
	return 0;
}
