//iniciar um vetor do tipo float[20]
//Ler e 20 notas e armazenar no vetor
//Receber uma valor X e procurar no vetor 
//Resonder "existe" ,ou "nao existe"
//se X<0 o programa deve parar
//

#include <stdio.h>

int main()
{
float notas[20];
int ctr=0;
int ctrum=0;
float X;
for(ctr=0;ctr<20;ctr++){
    scanf("%f",&notas[ctr]);
}
for(scanf("%f",&X);X>0;){
    while((notas[ctrum]!=X) && (ctrum<20))
    ctrum++;
    if(ctrum<20){
        printf("existe\n");
        scanf("%f",&X);
        ctrum=0;
    }    
    else{
        printf("nao existe\n");
        scanf("%f",&X);
        ctrum=0;
    }
}    
return 0;
}