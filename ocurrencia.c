#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra[100];
    int letras[30]={0};
    int i,longitud;

    printf("Escriba una palabra: ");
    scanf("%s", palabra);
    longitud=strlen(palabra);
    for(i=0;i<longitud;i++){
        letras[palabra[i]-'a']++;
    }
    printf("Ocurrencia: \n");
    for(i=0;i<30;i++){
        if(letras[i]>0){
            printf("%c: %d\n",'a'+ i, letras[i]);
        }
    }
    
}