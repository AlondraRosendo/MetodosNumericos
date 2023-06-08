#include <stdio.h>
#include <stdlib.h>

int main(){
   int m;
   int n;
   int a;
    printf("Ingrese el numero:  ");
    scanf("%d", &a);
   for(m=1;m<=a;m++){
      for(n=1;n<=a;n++){
        printf("%d\t", m*n);
      }
      printf("\n");
   }
   return 0;
}