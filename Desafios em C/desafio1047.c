#include<stdio.h>

int main(){

    int A, B, C, D;
    int inicio, fim, duracao, horas, minutos;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Converte tudo para minutos
    inicio = A * 60 + B;
    fim = C * 60 + D;

    // Se o fim for menor ou igual ao início, o jogo passou da meia-noite
    if (fim <= inicio) {
        fim += 24 * 60;
    }

    duracao = fim - inicio;
    horas = duracao / 60;
    minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
