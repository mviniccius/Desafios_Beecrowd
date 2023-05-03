#include <stdio.h>

int main(){
    
    float N1, N2, N3, N4, N5, media, media2;
    //pesos 2, 3, 4 e 1 = 10
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    media = (N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1);
    media = media/10;

    printf("Media: %.1lf\n", media);

    if (media >= 7.0){    
        printf("Aluno aprovado.");
    }
    else if (media < 5.0){
        printf("Aluno reprovado.");
    }  
   
    else{
        
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1lf\n", N5);        
        media2 = (media + N5)/2;
        if (media2 >=5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media2);
        } else printf("Aluno reprovado.");
    }

    return 0;

}