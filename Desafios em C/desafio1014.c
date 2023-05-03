#include <stdio.h>
int main(){
    
    int KM;
    float litros, media;
    
    scanf("%i %f", &KM, &litros);

    media = KM/litros;

    printf("%.3lf km/l\n", media);

    return 0;

}