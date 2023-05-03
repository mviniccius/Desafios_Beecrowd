#include <stdio.h>

int main (){

	double A, B, X;

    scanf("%lf",&A);
    scanf("%lf",&B);

    X = ((A * 3.5) + (B * 7.5))/ 11;
    printf("PROD = %.5lf\n", X);

	return 0;
}
