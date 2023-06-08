#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int d;

    while(numero<100){
        d=numero/2;
        printf("%d, ", d);
        numero++;
    }
    system("Pause");
    return 0;
}