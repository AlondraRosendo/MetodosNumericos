#include <stdio.h>
#include <stdlib.h> 

int main(){
    int cal;

    printf("Ingresa la calificacion \n");
    scanf("  %d",&cal);

    if(cal <8){
        printf("La calificacion minima aprobatoria es 8 \n");
    }if(cal >=8){
        printf("Felicidades aprobaste el curso\n");
    }
    system("Pause");
    return 0;
}