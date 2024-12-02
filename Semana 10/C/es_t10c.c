#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void paragrafo(char s[]);

struct aluno
{
    char nome[102];
    int ra;
    float nota1;
    float nota2;
    float media;
};

int main()
{
    int qnt;
    int i;

    // receber quantidade de alunos
    scanf("%d", &qnt);

    // alocar dinamicamente
    struct aluno** A = (struct aluno**)malloc(qnt * sizeof(struct aluno*));
    for (i = 0; i < qnt; i++)
    {
        A[i] = (struct aluno*)malloc(sizeof(struct aluno));
    }

    // receber dados dos alunos
    for (i = 0; i < qnt; i++)
    {
        getchar(); // consumir o caractere de nova linha pendente

        fgets(A[i]->nome, 102, stdin);
        paragrafo(A[i]->nome);
        scanf("%d", &(A[i]->ra));
        scanf("%f", &(A[i]->nota1));
        scanf("%f", &(A[i]->nota2));
        A[i]->media = (A[i]->nota1 + A[i]->nota2) / 2;
    }

    // imprimir dados dos alunos
    for (i = 0; i < qnt; i++)
    {
        printf("%d\t%s\t%.2f\n", A[i]->ra, A[i]->nome, A[i]->media);
    }

    // liberar memória alocada
    for (i = 0; i < qnt; i++)
    {
        free(A[i]);
    }
    free(A);

    return 0;
}

void paragrafo(char s[])
{
    s[strlen(s) - 1] = '\0';
}