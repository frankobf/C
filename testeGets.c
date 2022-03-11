#include<stdio.h>
#include<string.h>

void main(void){

    char v[50];

    fgets(v, 100, stdin);

    printf("%s \n", v);
}