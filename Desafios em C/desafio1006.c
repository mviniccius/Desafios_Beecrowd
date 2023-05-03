#include <stdio.h>

int main (){

	double A, B, C, X;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    X = ((A * 2.0) + (B * 3.0) +(C * 5))/ 10;
    printf("MEDIA = %.1lf\n", X);

	return 0;
}
