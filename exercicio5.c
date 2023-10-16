/*5. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float maiorMenor(float n1, float n2);

int main(){
    float n1, n2;
    printf("O menor = %g", maiorMenor(n1,n2));
}

float maiorMenor(float n1, float n2){
    
    printf("Digite dois números: \n");
    scanf("%g %g", &n1, &n2);

    return n1 > n2 ? n2:n1; 
}