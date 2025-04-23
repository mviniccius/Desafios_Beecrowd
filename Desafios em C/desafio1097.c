#include <stdio.h>

int main(){
    
    int a = 1, b = 7, count = 0, valorInicial = 7;

    while (1)
    {
        printf("I=%i J=%i\n", a, b);
        if (a == 9 && b == 13) break;
        b--;

        count++;
        if (count == 3)
        {
            a+=2;
            valorInicial += 2;
            b = valorInicial;
            count = 0;
        }
    }
    
    
    return 0;
}
