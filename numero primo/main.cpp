
//  Que pida un número del 1 al 5 y diga si es primo o no.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
            int i;
            printf("Introduzca número del 1 al 5:");
    scanf("%d",&i);

    if (i!=1) {
       printf("Es primo.");
    }
    else
    {
       printf("No es primo.");
    }

    system("PAUSE");     
    return 0;
}
