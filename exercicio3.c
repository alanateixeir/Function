#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau:
ax² + bx + c=0
Para ela existir, o coeficiente 'a' deve ser diferente de zero.
Caso o delta seja maior ou igual a zero, as raízes serão reais. Caso o delta seja negativo, as reais serão complexas e da forma: x + iy */

int rBaskhara(int num);

int main(){

}

int rBaskhara(int num){
    float n1, n2, n3, r;
    printf("Insira abaixo os valores de A, B e C respectivamente\n");
    scanf("%g %g %g", &n1, &n2, &n3);
    r = pow(n2,2) - (4 * n1 *n2);
    
}