#include <stdio.h>
#include <math.h>

int main()
{

// para definir o tamanho da matriz usarei variaveis int 
int nln;
int ncl;
int c;
int l;
int i;

//Leitura dos dados
////Leitura do tamanho da matriz

scanf("%d",&ncl);
nln=ncl;

////Leitura dos dados da matriz

float matriz [ncl][nln];

for(c=0;c<ncl;c++) {
    for(l=0;l<nln;l++)
        scanf("%f",&matriz[c][l]);
}

////Leitura dos dados para a normalizacao

int normalizador[nln]; 

for(i=0;i<nln;i++) {
    scanf("%d",&normalizador[i]);
}

////Leitura dos dados para o peso

float peso[nln];

for(i=0;i<nln;i++) {
    scanf("%f",&peso[i]);
}

//Montagem e impressão
////Montagem da matriz original

printf("Matriz original\n");

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++)
        printf("%.f\t",matriz[c][l]);
        printf("\n");
}



////Achando o vmax(valor maximo da coluna) e o vmin(valor minimo da coluna)

float temp;
float vmax[ncl];
float vmin[ncl];


for(c=0;c<ncl;c++,temp=0){
    for(l=0;l<nln;l++){
        if(matriz[l][c]>temp){
            temp=matriz[l][c];
            vmax[c]=temp;
        }
    }
}

for(c=0;c<ncl;c++,temp=99999){
    for(l=0,temp=99999;l<nln;l++){
        if(matriz[l][c]<temp){
            temp=matriz[l][c];
            vmin[c]=temp;
        }
    }
}    

//// Calculando os valores normalizados

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++){
        if(normalizador[c]==-1){
            matriz[l][c]=vmin[c]/matriz[l][c];
        }
        else{
        matriz[l][c]=matriz[l][c]/vmax[c];
        }
    }
}    

//// arredondamento

float result;

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++){
        result=(double)matriz[c][l];
        matriz[c][l]=roundf(100*result)/100;
    }
} 

//// imprimindo os valores normalizados

printf("\nMatriz normalizada\n");

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++)
        printf("%.2f\t",(matriz[c][l]));
        printf("\n");
}

//// calculando os valores multiplicados por pesos

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++){
        matriz[l][c]*=peso[c];
    }    
}

//// arredondamento

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++){
        result=(double)matriz[c][l];
        matriz[c][l]=roundf(100*result)/100;
    }
} 

//// imprimindo os valores multiplicados pelos pesos

printf("\nMatriz multiplicada pelos pesos\n");

for(c=0;c<ncl;c++){
    for(l=0;l<nln;l++)
        printf("%.2f\t",matriz[c][l]);
        printf("\n");
}

//// calculando o score

float score[ncl];
float rank[ncl];

for(c=0;c<ncl;c++){
    rank[c]=0;
}

for(c=0;c<ncl;c++){
    rank[c]=0;
    for(l=0;l<nln;l++){
        rank[c]=rank[c]+matriz[c][l];
    }
}

for(c=0;c<=ncl;c++){
    score[c]=rank[c];
}

////calculando vetor crescente
i=0;
int j=0;
temp=0;

for (j=ncl-1; j > 0; j--){ 
    for (i=0; i < j; i++){
        if (rank[i] < rank[i+1]){
            temp=rank[i];
            rank[i]=rank[i+1];
            rank[i+1]=temp;
        }
    }
}


//// imprimindo score
i=0;

printf("\n-----Resultado final-----\n");

for(l=0;l<nln;l++){
    printf("Alternativa %d| Score: %.2f| Rank: ",l,score[l]);
    while(score[l]!=rank[i]){
        i++;    
    }
    printf("%d\n",i);
    i=0;
}

return 0;
}