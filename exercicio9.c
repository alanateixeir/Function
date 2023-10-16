/*9. Use a função da questão passado e lance o dado 1 milhão de vezes. 
Conte quantas vezes cada número saiu.
A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int Dado();

int main(){
    srand(time(NULL));
    int i, r1=0, r2=0, r3=0, r4=0, r5=0, r6=0;

    for(i=0; i <1000000001; i++){
    int num1;
    printf("%d\n", Dado());
    num1 = Dado();

    if(num1 == 1){
        r1++;
    }
    else if(num1 == 2){
        r2++;
    }
    else if(num1 == 3){
        r3 ++;
    }
    else if(num1 == 4){
        r4++;
    }
    else if(num1 == 5){
        r5++;
    }
    else if(num1 == 6){
        r6++;
    }
    }
    printf("\n\n%d\n", r1);
    printf("%d\n", r2);
    printf("%d\n", r3);
    printf("%d\n", r4);
    printf("%d\n", r5);
    printf("%d\n", r6);
}

int Dado(){
    int num;
    num = rand()%6+1;
    return num;
}

