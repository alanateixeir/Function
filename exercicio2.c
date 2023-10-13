#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Crie uma função que receba três valores, 'a', 'b' e 'c', que são os 
coeficientes de uma equação do segundo grau e retorne o valor do delta, 
que é dado por 'b² - 4ac'*/

float rDelta(float r);

int main(){
    float r;
    printf("O resultado e %g", rDelta(r));
}

float rDelta(float r){
    float n1, n2, n3;
    printf("Insira abaixo os valores de A, B e C respectivamente\n");
    scanf("%g %g %g", &n1, &n2, &n3);
    
    r = pow(n2,2) - (4 * n1 *n2);
    return r;
}
