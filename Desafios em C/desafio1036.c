#include <stdio.h>
#include <math.h>
int main (){

	float A, B, C, X1, X2, delta;

	scanf("%f %f %f", &A, &B, &C);
	
    delta = (B*B) - (4*A*C);
	
    if(A == 0){
        printf("Impossivel calcular\n");
    }else if (delta > 0)
    {
        X1 = (-B +pow (delta, 0.5))/(2*A);
        X2 = (-B -pow (delta, 0.5))/(2*A);
        printf("R1 = %.5lf\n", X1);
        printf("R2 = %.5lf\n", X2);
    }else
    printf("Impossivel calcular\n");

	return 0;
}