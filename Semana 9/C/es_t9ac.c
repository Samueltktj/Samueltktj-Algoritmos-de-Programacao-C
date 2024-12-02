#include <stdio.h>
#include <math.h>

float soma(float x, float y);
float subtracao(float x, float y);
float multiplicacao(float x, float y);
float divisao(float x, float y);
float potenciacao(float x, float y);

int main()
{
    char sinal;
    float numero1;
    float numero2;

    scanf("%f",&numero1);
    sinal=getchar();
    scanf("%f",&numero2);



    if(sinal=='+'){
    printf("%.3f\n",soma(numero1,numero2));
    }
    else if(sinal=='-'){
        printf("%.3f\n",subtracao(numero1,numero2));
    }
    else if(sinal=='*'){
        printf("%.3f\n",multiplicacao(numero1,numero2));
    }
    else if(sinal=='/'){
        printf("%.3f\n",divisao(numero1,numero2));
    }
    else if(sinal=='^'){
        printf("%.3f\n",potenciacao(numero1,numero2));
    }



    return 0;
}

float soma(float x, float y)
{
    float resultado;

    resultado=(x+y);

    return resultado;
}

float subtracao(float x, float y)
{
    float resultado;
    
    resultado=(x-y);

    return resultado;
}

float multiplicacao(float x, float y)
{
    float resultado;
    
    resultado=(x*y);

    return resultado;
}

float divisao(float x, float y)
{
    float resultado;

    resultado= (x/y);

    return resultado;
}

float potenciacao(float x, float y)
{
    float resultado;
    
    resultado=pow(x,y);

    return resultado;
}