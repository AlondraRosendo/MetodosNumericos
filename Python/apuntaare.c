#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i,n;
    char *buffer;

    printf("Teclea la longitud de la cadena");
    scanf("%d",&i);

    buffer=(char*)malloc((i+1)*sizeof(char));
    if(buffer==NULL)exit(1);

    for(n=0;n<i;n++){
    printf("Ingresa valores\n");
    scanf("%s",&buffer[n]);
}

    printf("Random string %s\n",buffer);
    free(buffer);
    system("Pause");
}