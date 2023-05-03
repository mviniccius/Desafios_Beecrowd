#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

	float A, B, C, numABS1, numABS2, numABS3, perimetro, areaTrapezio;
    int cont = 0;   

    scanf("%f %f %f", &A, &B, &C);
    //printf("%i\n",(numABS1 = B-C) < A && A < (B+C) );   
   
    if(((numABS1 = B-C) < A && A < (B+C)) == 1){        
        cont += 1;
    }
    if(((numABS2 = A-C) < B && B < (A+C)) == 1){       
        cont += 1;
    }
    if(((numABS3 = A-B) < C && C < (A+B)) == 1){        
        cont += 1;
    }

    if(cont == 3){
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    }else{
        areaTrapezio = ((A + B) * C) /2;
        printf("Area = %.1f\n", areaTrapezio);
    }
	
	return 0;
}
