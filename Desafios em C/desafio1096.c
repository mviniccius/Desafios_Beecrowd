#include <stdio.h>

int main(){
    
    int a = 1, b = 7, count = 0;

    while (1)
    {
        printf("I=%i J=%i\n", a, b);
        if (a == 9 && b == 5) break;
        b--;

        count++;
        if (count == 3)
        {
            a+=2;
            b = 7;
            count = 0;
        }
    }
    
    
    return 0;
}
