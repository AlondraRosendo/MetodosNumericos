#include <stdio.h>
#include <stdlib.h>

int main(){
    char m[20];
    int i;
    printf("Escriba una palabra: ");
    scanf("%s", m);
    i=0;

    while(m[i++]!= '\0');
    printf("%s escrita al reves es: ", m);

    while(i>=0)
    printf("%c", m[i--]);

    printf("\n");
    system("Pause");
    return 0;
}