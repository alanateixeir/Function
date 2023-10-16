/*
10. Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit.
Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão 
escolhida é realizada através de um comando SWITCH.
Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
C= 5.(F-32)/9
F= (9.C/5) + 32
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char temp;
    float grau, r;

    printf("Digite qual a temperatura escolhida e graus\nF = Farenheit | C = Célsius:");
    scanf("%c", &temp);
    printf("Digite a temperatura: \n");
    scanf("%f", &grau);

    switch (temp){
        case 'C':
        r = (9*grau/5) + 32;
        printf("%g", r);
        break;

        case 'F':
        r = 5*(grau-32)/9;
        printf("%g", r);
        break;
    }

    
}