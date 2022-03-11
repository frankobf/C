#include<stdio.h>

void main(void){
    int mat[10];

    /*for(int i = 0; i < 50 ; i++){     neste laço a atribuição execede o espaço reservado da matriz unidimensional, é responsabilidade do programador prover os limites onde for necessário.  
        mat[i]=i;
    }

    printf("%d \n\n", mat[20]);     impressão de um valor na posição que excede o espaço reservado da matriz. O compilador C aceira mas é errado. */ 

    for(int i = 0; i < 10; i++){  // limite correto.
        mat[i] = i;
        printf("[%d] ", mat[i]);
    }

    printf("\nFinish!\n\n");

}