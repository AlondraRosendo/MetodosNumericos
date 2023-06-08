#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    char m[20];
    char n[20];
    printf("Escriba una palabra: ");
    scanf("%s", m);
    printf("Escriba una palabra: ");
    scanf("%s", n);
    len= strlen(m);
    for(int i=0;i<len;i++){
        strcat(m,n);
        
    }
    printf("%s ",m);

    return 0;
}