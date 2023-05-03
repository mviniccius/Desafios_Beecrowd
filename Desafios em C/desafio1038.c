#include <stdio.h>

int main (){

	int num1, num2;
    float preco;

    scanf("%i %i", &num1, &num2);

    if(num1 == 1 )
    preco = 4.00 * num2;

    if(num1 == 2 )
    preco = 4.50 * num2;
    
    if(num1 == 3)
    preco = 5.00 * num2;
    
    if(num1 == 4)
    preco = 2.00 * num2;
    
    if(num1 == 5)
    preco = 1.50 * num2;
    
    printf("Total: R$ %.2f\n", preco);
    
	
	return 0;
}
