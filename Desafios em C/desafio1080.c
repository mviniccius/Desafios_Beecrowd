#include<stdio.h>

int main(){

    int maior = 0, posicao;
    int listaNum[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%i", &listaNum[i]);
        if (listaNum[i] > maior)
        {
            maior = listaNum[i];
            posicao = i+1;
        }
       

    }
    printf("%i\n", maior);
    printf("%i\n", posicao);

    return 0;
}