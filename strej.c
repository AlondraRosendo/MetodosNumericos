#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    char m[20];
    char n[20];
    char t[20];
    printf("Ingresa una palabra: ");
    scanf("%s", m);
    printf("Ingresa una palabra: ");
    scanf("%s", n);
    printf("m: %s\n",m);
    printf("n: %s\n",n);

    strcpy(t, m);
    strcpy(m,n);
    strcpy(n, t);
    printf("m:%s\n ", m);
    printf("n:%s\n", n);
    system("Pause");
    return 0;
}