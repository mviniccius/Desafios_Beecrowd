#include <stdio.h>

int main (){

	int num, i = 0;

    scanf("%i", &num);
    
    for(i = 0; i <= num; i++){
        if(i % 2 != 0){
            printf("%i\n", i);
        }
    }
    
	return 0;
}
