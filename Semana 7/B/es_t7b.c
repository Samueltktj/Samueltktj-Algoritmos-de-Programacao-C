

#include <stdio.h>
#include <string.h>

//receber uma string
//invertela e armazenar em um outro vetor
//usar uma condicional para comparalas
//imprimir uma resposta na tela

int main ()
{
char palavra[121];
char palavra1[121];
int i; // variavel de controle
int j; //variavel de controle
int p=0;
int u=0;

fgets(palavra,121,stdin); 

//tirar o /n da palavra 1
palavra[strlen(palavra)-1]='\0';

//transformar tudo em minusculo
for(j=0;j<=strlen(palavra);j++){
    if((palavra[j] >= 'A') && (palavra[j] <= 'Z')){
        palavra1[j]=palavra[j]+32;
    }
    else if((palavra[j] >= 'a') && (palavra[j] <= 'z')){
        palavra1[j]=palavra[j];
    }
}

//comparar a primeira com a ultima letra, decrementar a variavel u e incrementar a variavel p, se u==-1 entao sera palindromo
p=0;
u=strlen(palavra1)-1;

while(p<strlen(palavra1)){
   if(palavra1[u]==palavra1[p]){
       p++;
       u--;
   }
   else{
   printf("Esta palavra nao e um palindromo\n");
   return 0;
   }
}
    
printf("Esta palavra e um palindromo\n");

return 0;
}
