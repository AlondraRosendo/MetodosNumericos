#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[10];
    int i=0;
    while(i<10){
        vector[i]=10;
        i++;
    }
    i=0;
    while(i<10){
        printf("vector[%d]= %d ",i, vector[i]);
        printf("\n");
        i++;
    }

    system("Pause");
    return 0;

}