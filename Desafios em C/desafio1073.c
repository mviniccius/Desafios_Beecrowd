#include<stdio.h>

int main(){

    int num;
    long resultado;
    scanf("%i", &num);

    for(int i = 2; i <= num; i+=2){
        resultado = i*i;
        printf("%i^2 = %ld\n", i, resultado);
    }

    return 0;
}