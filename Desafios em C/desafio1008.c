#include <stdio.h>

int main (){

	int matricula; //horas;
    double horas;
    double salario;
    double salarioRecebido;
    
    scanf("%i", &matricula);
    scanf("%lf", &horas);
    scanf("%lf", &salario);
    
    salarioRecebido = salario * horas;

    printf("NUMBER = %i\n", matricula);
    printf("SALARY = U$ %.2lf\n", salarioRecebido);

	return 0;
}
