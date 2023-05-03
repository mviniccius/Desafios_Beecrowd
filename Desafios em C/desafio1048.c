#include <stdio.h>

int main (){


    float salario, aumento, novoSalario;

    scanf("%f", &salario);

    if(salario >= 0 && salario <=400){
        novoSalario = salario + (salario * (15.0/100.0));
        aumento = salario * (15.0/100.0);       
        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 15 %%\n");
    }else if(salario > 400 && salario <=800){
        novoSalario = salario + (salario * (12.0/100.0));
        aumento = salario * (12.0/100.0);
        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 12 %%\n");
       
    }else if(salario > 800 && salario <= 1200){
        novoSalario = salario + (salario * (10.0/100.0));
        aumento = salario * (10.0/100.0);
        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 10 %%\n");
        
    }else if(salario > 1200 && salario <= 2000){
        novoSalario = salario + (salario * (7.0/100.0));
        aumento = salario * (7.0/100.0);
        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 7 %%\n");
        
    }else{
        novoSalario = salario + (salario * (4.0/100.0));
        aumento = salario * (4.0/100.0);
        printf("Novo salario: %.2f\n",novoSalario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 4 %%\n");
       
    }


	return 0;
}
