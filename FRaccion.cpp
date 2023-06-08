#include <stdio.h>
#include <stdlib.h> 


int main(){
    double a=3;
    double b=30;
    double c=23;
    double i;

    //segundo

    double aa=5;
    double bb=2;
    double cc=1;
    double dd=4;
    double z;

//operacion i
    i=((cc/a)+(a/aa)+(cc/b)/(c/b));
    //imprimir
    printf("Resultado : %f \n", i);
    //operacion z
   z=(aa+(bb/(cc/(cc+(bb/(bb-(cc/dd)))))));
   //imprimir
   printf("Resultado : %f \n", z);
  system("Pause");
  return 0;

}