#include <stdio.h>

int main()
{
    int n, I, produto;

    printf("DESEJA TABUADA PARA QUAL VALOR: ");
    scanf("%d", &n);


    for (i = 1; i <= 10; i++)
    {

        produto = n * i;
        printf ("%d x %d = %d\n", n,i,produto);
    }


    return 0;
}
