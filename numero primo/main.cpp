
//  Que pida un n�mero del 1 al 5 y diga si es primo o no.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
            int i;
            printf("Introduzca n�mero del 1 al 5:");
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
