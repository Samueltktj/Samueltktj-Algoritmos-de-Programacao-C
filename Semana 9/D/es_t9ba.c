#include <stdio.h>
#include <math.h>

#define tam 10

int A[tam];
int B[tam];
int i;

void procedimento(int A[tam], int B[tam]) 
{
    for (i = 0; i < tam; i++) 
    {
        B[i] = pow(A[i], 3);
    }
}

int main() 
{
    for (i = 0; i < tam; i++) 
    {
        scanf("%d", &A[i]);
    }

    procedimento(A, B);

    for (i = 0; i < tam; i++) 
    {
        printf("%d\n", B[i]);
    }

    return 0;
}
