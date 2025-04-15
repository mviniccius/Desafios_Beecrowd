#include<stdio.h>

int main(){

    float salario, primeiraFaixa = 0, segundaFaixa = 0, terceiraFaixa = 0, imposto = 0;

    scanf("%f", &salario);


    if (salario <= 2000.00)
    {
        printf("Isento\n");
    }else{
        if (salario > 3000.00 && salario <= 4500.00)
        {            
            segundaFaixa = salario - 3000.00;
            primeiraFaixa = 1000;
            imposto = (segundaFaixa * 0.18) + (primeiraFaixa * 0.08);
        }
        if (salario > 2000.00 && salario <= 3000.00)
        {
            primeiraFaixa = salario - 2000.00;
            imposto = (primeiraFaixa * 0.08);
        }
        if (salario > 4500.00)
        {
            terceiraFaixa = salario - 4500.00;
            segundaFaixa = 1500;
            primeiraFaixa = 1000;

            imposto = (terceiraFaixa * 0.28) + (segundaFaixa * 0.18) + (primeiraFaixa * 0.08);
        }
        printf("R$ %.2f\n", imposto);
    }
    
    return 0;
}