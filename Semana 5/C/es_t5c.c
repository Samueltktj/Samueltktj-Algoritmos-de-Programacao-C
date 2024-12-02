// iniciar 2 vetores do tipo int de 10 elementos
// escrever a intercalacao dos dois com printf
// pensei em usar um laco while com uma variavel de controle ate 8 e o decimo elemento seria um printf de fora do laco com o /n
//
//
//


#include <stdio.h>

int main ()
{
int linhaum[10];
int linhadois[10];
int ctr; //variavel de controle

for(ctr=0;ctr<10;ctr++){
    scanf("%d", &linhaum[ctr]);
}
for(ctr=0;ctr<10;ctr++){
    scanf("%d", &linhadois[ctr]);
}
for(ctr=0;ctr<9;ctr++){
    printf("%d|%d|",linhaum[ctr],linhadois[ctr]);
}
printf("%d|%d|\n",linhaum[9],linhadois[9]);



return 0;    
}