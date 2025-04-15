#include<stdio.h>

int main(){

    int num;

    scanf("%i", &num);

    float matriz[num][3], mediaPonderada;
    
    for(int i = 0; i < num; i++){
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &matriz[i][j]);            
        }
        mediaPonderada = ((matriz[i][0] * 2) + (matriz[i][1] * 3) + (matriz[i][2] * 5))/10;
        printf("%.1f\n",mediaPonderada);
    }

    return 0;
}