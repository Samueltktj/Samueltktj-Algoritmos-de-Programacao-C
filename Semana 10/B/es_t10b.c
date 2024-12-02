#include <stdio.h>
#include <stdlib.h>

int** alocacaodematriz(int linha, int coluna);
void liberamatriz(int** matriz, int linha);

int main()
{
    int l;
    int c;
    int i;
    int j;
    int** matriz;
    int** matriztransposta;
    int simetrica = 1;

    scanf("%d", &l);
    scanf("%d", &c);

    matriz = alocacaodematriz(l, c);
    matriztransposta = alocacaodematriz(c, l);

    // recebendo os dados da matriz
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // criando a matriz transposta
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            matriztransposta[j][i] = matriz[i][j];
        }
    }

    // verificando se a matriz é simétrica
    if (l != c)
    {
        simetrica = 0;
    }
    else
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (matriz[i][j] != matriztransposta[i][j])
                {
                    simetrica = 0;
                    break;
                }
            }
            if (!simetrica)
            {
                break;
            }
        }
    }

    // Imprimindo o resultado
    if (simetrica)
    {
        printf("Eh simetrica\n");
    }
    else
    {
        printf("Nao eh simetrica\n");
    }

    // Liberando a memória alocada
    liberamatriz(matriz, l);
    liberamatriz(matriztransposta, c);

    return 0;
}

int** alocacaodematriz(int linha, int coluna)
{
    int** matriz = (int**)malloc(linha * sizeof(int*));

    for (int i = 0; i < linha; i++)
    {
        matriz[i] = (int*)malloc(coluna * sizeof(int));
    }

    return matriz;
}

void liberamatriz(int** matriz, int linha)
{
    for (int i = 0; i < linha; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}
