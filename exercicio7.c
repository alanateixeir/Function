/*7. Crie uma função em linguagem C que receba 3 números e retorne o menor valor, use a função da questão 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menor(float n1, float n2, float n3);

int main()
{
    float n1, n2, n3;
    menor(n1, n2, n3);
}

void menor(float n1, float n2, float n3)
{

    printf("Digite tres numeros: \n");
    scanf("%g %g %g", &n1, &n2, &n3);
    printf("O menor numero:\n");
    if (n1 < n2 && n1 < n3){
        printf("%g", n1);
    }
    else if (n2 < n1 && n2 < n3){
        printf("%g", n2);
    }
    else if (n3 < n1 && n3 < n2){
        printf("%g", n3);
    }
}