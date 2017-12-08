//Que pida un número y diga si es mayor de 100.

#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main(int argc, char** argv)
{
            int num1;
           
            printf("Introduzca un número:");
    scanf("%d",&num1);
   
    if (num1>100){
       printf("Es mayor\n");
    }
    else
    {
       printf("Es menor\n");
    }
   
    system("PAUSE");     
    return 0;
}

