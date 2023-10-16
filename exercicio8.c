/*8. Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio,
 um número de 1 até 6. Utilize as funções srand(time(NULL)) e rand(); */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int Dado();

int main(){
    srand(time(NULL));
    printf("%d", Dado());
}

int Dado(){
    int num;
    num = rand()%6+1;
    return num;
}

