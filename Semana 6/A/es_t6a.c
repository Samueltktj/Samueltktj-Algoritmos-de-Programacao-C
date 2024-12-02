#include <stdio.h>


int main()
{

// para definir o tamanho da matriz usarei variaveis int 
int nln;
int ncl;
int c;
int l;

scanf("%d" "%d",&ncl, &nln);

int matriz [ncl][nln];

for(c=0;c<ncl;c++) {
    for(l=0;l<nln;l++)
        scanf("%d",&matriz[c][l]);
}

for(l=0;l<nln;l++){
    for(c=0;c<ncl;c++)
        printf("%d ",matriz[c][l]);
        printf("\n");
}

return 0;
}
