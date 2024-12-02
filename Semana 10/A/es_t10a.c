#include <stdio.h>
#include <stdlib.h>

float avaliarPolinomio(float grau, float* coeficientes, float x) 
{
    float resultado = 0.0;
    float potencia = 1.0;

    for (int i = 0; i <= grau; i++) 
    {
        resultado += coeficientes[i] * potencia;
        potencia *= x;
    }

    return resultado;
}

int main() {
    int grau;
    float* coeficientes;
    float x;
    float resposta;

    scanf("%d", &grau);

    coeficientes = (float*)malloc((grau + 1) * sizeof(float));

    if (coeficientes == NULL) 
    {
        printf("Memoria insuficiente\n");
        return 1;
    }

    for (int i = 0; i <= grau; i++) 
    {
        scanf("%f", &coeficientes[i]);
    }

    scanf("%f", &x);

    resposta = avaliarPolinomio(grau, coeficientes, x);

    printf("%.2f\n", resposta);

    free(coeficientes);

    return 0;
}
