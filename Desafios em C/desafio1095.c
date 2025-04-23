#include <stdio.h>

int main(){
    
    int a = 1, b = 60;

    while (b >= 0)
    {
        printf("I=%i J=%i\n", a, b);
        a+=3;
        b = b - 5;
    }
    
    return 0;
}
