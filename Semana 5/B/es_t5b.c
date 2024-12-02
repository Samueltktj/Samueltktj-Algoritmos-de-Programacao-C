#include <stdio.h>

//DECLARAR 2 VETORES COM 10 POSIÇOES
//1 PARA QUANTIDADE DE PRODUTOS VENDIDOS OUTRO PARA SEU VALOR
//SOMAR OS VETORES 
//FAZER UMA VARIAVEL PARA O FATURAMENTO = QUANTIDADE * PREÇO
//FAZER UM PRINTF "O lucro foi de  3850.000 e a quantidade de produtos vendidos foi de 55"
int main()
{
int ctr; // variavel de controle de leitura
float somaqtd=0;
float somavlr=0;
float qtd[10];
float vlr[10];
double lucro;

for(ctr=0;ctr<10;ctr++) {
    scanf("%f",&qtd[ctr]);
    somaqtd+=qtd[ctr];
}
for(ctr=0;ctr<10;ctr++){
    scanf("%f",&vlr[ctr]);
    somavlr+=vlr[ctr];
}
for(ctr=0;ctr<10;ctr++)
    lucro+=(qtd[ctr]*vlr[ctr]);
    
printf("O lucro foi de  %6.3lf e a quantidade de produtos vendidos foi de %.f\n",lucro,somaqtd);

return 0;
}