#include<stdio.h>

void main(void){

    char nome[50];

    printf("Escreva seu nome: ");
    scanf("%[^\n]", nome);

    printf("Seu nome é %s\n", nome);
}