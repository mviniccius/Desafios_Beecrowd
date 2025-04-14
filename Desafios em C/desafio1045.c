#include <stdio.h>

int main(){

    float A, B, C, temp;

    scanf("%f %f %f", &A, &B, &C);

    if (B > A) { temp = A; A = B; B = temp; }
    if (C > A) { temp = A; A = C; C = temp; }
    if (C > B) { temp = B; B = C; C = temp; }
    
    if (A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }else{

        if ((A * A) == ((B*B) + (C*C)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((A*A) > ((B*B) + (C*C)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A*A) < ((B*B) + (C*C)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else  if ((A == B) || (A == C) || (B == C))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}