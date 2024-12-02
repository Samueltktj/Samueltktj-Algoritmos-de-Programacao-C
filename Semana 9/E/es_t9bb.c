#include <stdio.h>


int A;
int B;
int C;
int D;
int Z;
int W;
char caractere;

void procedimentosoma(int A, int B, int C, int D) 
{
    Z= A + C;
    W= B + D;
}

void procedimentomult(int A, int B, int C, int D) 
{
    Z= ((A * C)-(B * D));
    W= ((A * D)+(B * C));
}

int main() 
{
    scanf("%d %d %c %d %d", &A, &B, &caractere, &C, &D);

    if(caractere=='+')
    {
        procedimentosoma(A, B, C, D);
        printf("%d + %di\n",Z,W);
    }
    else if(caractere=='*')
    {
        procedimentomult(A, B, C, D);
        printf("%d + %di\n",Z,W);
    }

    return 0;
}