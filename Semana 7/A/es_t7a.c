#include <stdio.h>
#include <string.h>

int main()
{
int i; // variavel de controle
char palavra[81]; // string é para C um vetor de caracteres

fgets(palavra,81,stdin);// lembrar de tirar o \n

palavra[strlen(palavra)-1]='\0';

for(i=strlen(palavra)-1;i>=0;i--){
    printf("%c",palavra[i]);
}

printf("\n");
return 0;
}