#include<stdio.h>

void main(void)
{
    int mat[10];

    int t = 0;

    for(t= 0; t < 10; t++) mat[t]= t;

    printf("%d \n", mat[5]);
}