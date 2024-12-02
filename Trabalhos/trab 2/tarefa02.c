#include <stdio.h>

int main()
{

int N;
int P;
int somadivisoresN=0; //usar um += para armazenar essa soma e tirar o valor de N
int somadivisoresR=0;
int i=0; // variavel de controle dos laços

scanf("%d",&N);
scanf("%d",&P);

int R=N-P;

for(i=1;i<=N/2;i++) {
    if(N % i == 0){
        somadivisoresN += i;
    }
}

for(i=1;i<=R/2;i++) {
    if(R % i == 0){
        somadivisoresR += i;
    }
}

//JULGAMENTO DE N

if(somadivisoresN==N) {
    printf("N=%d eh um numero perfeito.\n",N);
}
else { 
    if(somadivisoresN<N){
        printf("N=%d eh um numero deficiente.\n",N);
    }
    else {
        if(somadivisoresN>N) {
            printf("N=%d eh um numero abundante.\n",N);
         }
    }
}

//JULGAMNETO DE P
int divisor = (N/P);

if(divisor*P==N){
    printf("P=%d eh um divisor de N=%d.\n",P,N);
}
else{
    printf("P=%d nao eh um divisor de N=%d.\n",P,N);
}

//JULGAMENTO DE R

if(somadivisoresR==R) {
    printf("R=%d eh um numero perfeito.\n",R);
}
else { 
    if(somadivisoresR<R){
        printf("R=%d eh um numero deficiente.\n",R);
    }
    else {
        if(somadivisoresR>R) {
            printf("R=%d eh um numero abundante.\n",R);
         }
    }
}


return 0;
}
