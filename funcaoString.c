#include<stdio.h>
#include<string.h>

void main(void){
    
    char s1[80], s2[80];
    
    fgets (s1, 80, stdin); 
    fgets (s2, 80, stdin);

    int a = strlen(s1) - 1; //tive que colocar -1 pois a função pode estar contanto o espaço como caractere.
    int b = strlen(s2) - 1;

    printf("comprimentos: s1 = %d s2 = %d \n", a,b);


    if(!strcmp(s1, s2)) printf("A strings são iguais\n");// lembrando que strcmp retorna false por isso coloquei o operador ! na frente da função.
    strcat(s1, s2);
    printf("%s", s1);//por causa do fgets, está pegando tambem a quebra de linha.

    strcpy(s1, "Isso é um teste. \n");
    printf("%s\n",s1);
    if(strchr("alo",'o')) printf("o está em alo\n");
    if(strstr("ola aqui", "ola")) printf("ola encontrado\n");  

}

//VERIFICAR A MELHOR FORMA EM C DE RECEBER UMA STRING DEPOIS VER O SE O RESULTADO NA FUNÇÃO DE CONCATENAÇÃO E TAMANHO DÃO CERTO DEU CERTO.