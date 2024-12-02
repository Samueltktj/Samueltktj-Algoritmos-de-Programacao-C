#include <stdio.h>

int tam;
int i;

void procedimento(int vet[]);

int main()
{
    scanf("%d", &tam);

    int vet[tam];

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    procedimento(vet);

    printf("maior valor: %d\nmenor valor: %d\n", vet[0], vet[tam - 1]);

    return 0;
}

void procedimento(int vet[])
{
    int temp;

    for(i = 0; i < tam - 1; i++)
    {
        for(int j = 0; j < tam - 1 - i; j++)
        {
            if(vet[j] < vet[j+1])
            {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
}
