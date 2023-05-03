#include <stdio.h>

int main (){

    int a, b, c, d;

    scanf("%i %i %i", &a, &b, &c);    
    
    d = (a + b + abs(a-b))/2;
    d = (d + c + abs(d-c))/2;
    
    printf("%d eh o maior\n",d);
            
	return 0;
}