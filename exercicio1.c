#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/*1. Crie uma função que receba um valor e informe se ele é positivo ou não.*/

void nPositivo(int n);

int main(){
    int n;
    nPositivo(n);
}

void nPositivo(int n){
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n>-1){
        printf("O numero e positivo.");
    }
    else {
        printf("O numero nao e positivo.");
    }
}


