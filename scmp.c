#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int res;
    int len1, len2;
    char m[20];
    char n[20];
    printf("Escriba una palabra: ");
    scanf("%s", m);
    printf("Escriba una palabra: ");
    scanf("%s", n);
    len1 = strlen(m);
    len2 = strlen(n);

    if(len1 > len2){
        printf("La palabra mayor es: %s\n" , m,n);
    }else{
        if(len1 == len2 ){
            printf("La palabras es iguales");
        }else{
            if(len1 < len2){
                printf("La palabra menor es: %s\n", m,n);
            }
        }   
    }
  res = strcmp(m, n);
  printf("resultado:%d ", res);
}