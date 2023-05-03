#include <stdio.h>

int main (){

	int a, b , c, A, B, C, temp;

    scanf("%i %i %i", &a, &b, &c);

    A = a;
    B = b;
    C = c;

    if(A > B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A > C){
        temp = A;
        A = C;
        C = temp;
    }
    if(B > C){
        temp = B;
        B = C;
        C = temp;
    }

   // printf("A = % i - B = %i - C = %i\na = %i - b = %i - c = %i\n", A, B, C, a, b, c);

   printf("%i\n%i\n%i\n", A, B, C);
   printf("\n%i\n%i\n%i\n", a, b, c); 
	return 0;
}
