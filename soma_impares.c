#include <stdio.h>

int main()
{
    int x, y, soma, troca;

    printf ("DIGITE DOIS NUMERO:\n ");
    scanf ("%d %d", &x, &y);




    for (x > y  ){

        troca = x;
        x = y;
        y = troca;
    }
    soma = 0;
    for (int i = x+1; i < y; i++ ){
        if ( i % 2 != 0){
          soma = soma + i;
        }

    }

    printf("SOMA DOS IMPARES = %d\n", soma);




    return 0;
}
