#include <stdio.h>
#include <stdlib.h> 

int main(){
    int horas;
    int precioh;
    int salario;
    int salsem;
    
    printf("Ingrese las horas trabajadas: \n");
    scanf("%d", &horas);
    printf("Ingrese el precio por hora: \n");
    scanf("%d", &precioh);
    if(horas<=40){
        salario=(horas*40);
         printf("Salario semanal es: %d \n", salario);
    }else{
        salsem=(40*precioh+(precioh*1.5*(horas-40)));
        printf(" Tu salario semanal es: %d \n",salsem);
    
    printf("Fin del programa\n");

    }
    system("Pause");
    return 0;

}