#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,factor=1;

    printf("Ingrese el numero deseado: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factor=factor*i;
    }
        printf("El factorial es: %d",factor);

    return 0;
}
