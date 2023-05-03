#include <stdio.h>
int main(){
  
    int t, v, d;
    
    float litros, g = 12.000;

    scanf("%i %i",&t, &v);    
    //scanf("%i",&v);
         
     d = v * t;
          
     litros = d / g;    

    printf("%.3f\n",litros);

    return 0;
}