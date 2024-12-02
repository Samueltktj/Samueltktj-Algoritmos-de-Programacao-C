
#include <stdio.h>

int main()
{
int a,b;
int resto=1;
int ehimpar=0;
int ehpar=0;
int contagem=1; //variavel de controle para os scanf

    while(contagem<=10) {
        contagem++;
        scanf("%d",&a);
        b=a/2;
        if(a==(b*2)+resto){
            ehimpar++;
        }
        else {
            ehpar++;
        }    
    }
    printf("%d pares, %d impares\n",ehpar,ehimpar);
}