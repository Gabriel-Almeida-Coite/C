#include <stdio.h>
#include <math.h>

int main()
{

    int a, b,c,  menor

    printf("PRIMEIRO VALOR: ");
    scanf("%d", &a)

    printf("SEGUNDO VALOR: ");
    scanf("%d", &b)

    printf("TERCEIRO VALOR: ");
    scanf("%d", &c)

    if ( a < b && a < c  )
    {
        menor = a;


    }
    else if (b < c )
    {
        menor = b;

    }
    else
    {
        menor = c;
    }


    printf ("MENOR: %d\n", menor)




    return 0;
}
