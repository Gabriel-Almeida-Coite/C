#include <stdio.h>
#include <math.h>

int main()
{

    int x, y;

    printf ("Digite dois numero \n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    while ( x != y )
    {
        if (x < y )
        {
            printf("CRESCENTE \n");
        }
        else
        {
            printf("DECRESCENTE \n");
        }
        printf ("Digite outros dois numeros \n")
        scanf("%d", &x);
        scanf("%d", &y);

    }




    return 0;
}
