#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char m[50];
    printf("Ingresa una palabra:");
    scanf("%s", m);
    n=strlen(m);
    printf("La longitud de %s es: %d \n", m, n);
    
    for(int i=0;i<n;i++){
        for(int a=0;a<n;a++){
            printf("*");

        }
        printf("\n");
    }

    
    return 0;

}