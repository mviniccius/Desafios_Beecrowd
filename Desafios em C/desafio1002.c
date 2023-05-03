#include <stdio.h>

int main (){

	double n = 3.14159;
    double a, R;

    scanf("%lf", &R);
    
    a = n * (R*R);
    
    printf("A=%.4lf\n", a);

	return 0;
}
