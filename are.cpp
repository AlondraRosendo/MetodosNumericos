#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[20];
    int m,s,p;
    a[0]=10;
    a[1]=3;
    a[2]=5;
    a[3]=18;
    a[4]=24;
    a[5]=7;
    a[6]=8;
    a[7]=6;
    a[8]=2;
    a[9]=1;
    a[10]=17;
    a[11]=100;
    a[12]=68;
    a[13]=4;
    a[14]=3;
    a[15]=21;
    a[16]=26;
    a[17]=56;
    a[18]=4;
    a[19]=6;

    s=(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10]+a[11]+a[12]+a[13]+a[14]+a[15]+
    a[16]+a[17]+a[18]+a[19]);
    printf("El promedio es: %d\n", s/20);
    m=(a[0]*a[1]*a[2]*a[3]*a[4]*a[5]*a[6]*a[7]*a[8]*a[9]*a[10]*a[11]*a[12]*a[13]*a[14]*a[15]*
    a[16]*a[17]*a[18]*a[19]);
    printf("Resultado de la multiplicacion es: %d\n",m);

    system("Pause");
    return 0;
}