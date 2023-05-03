#include <stdio.h>

int main (){

	char nome [50];
    double salario, comissao, total, bonus;
            
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &comissao);

    bonus = comissao * .15;
    total = salario + bonus;

    printf("TOTAL = R$ %.2lf\n", total);

	return 0;
}
