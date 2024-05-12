#include <stdio.h>
#include <math.h>

int main(){

double nota1, nota2;
double notaFinal;

printf ("DIGITE A NOTA 1: ");
scanf("%lf", nota1);

printf("DIGITE A NOTA 2: ");
scanf("%lf", nota2);

notaFinal = nota1 + nota2 ;

printf ("NOTA FINAL: %.1lf\n" , notaFinal);

if (notaFinal <= 5 ){
    printf ("REPROVADO\n");
}




return 0;
}
