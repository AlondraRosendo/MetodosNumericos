#include <stdio.h>
#include <stdlib.h> 


int main(){
    int años;
    int sueldo;
    double res;
    puts("Antiguedad: ");

    scanf(" %d", &años);
    if(años>=5){
        puts("Sueldo: ");
        scanf(" %d",&sueldo);
        res= sueldo*0.1;
        if(res>=1000){
            printf("Felicidades se aprobo tu credito \n");
        }
    }
    system("Pause");
}