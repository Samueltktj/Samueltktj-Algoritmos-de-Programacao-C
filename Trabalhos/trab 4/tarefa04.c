#include <stdio.h>
#include <string.h>

#define MAX_PERGUNTAS 5
#define MAX_ALTERNATIVAS 3

void paragrafo(char s[]);

struct pergunta {
    char formato;
    char texto[101];
    int corretaint;
    float corretafloat;
};

struct alternativaint {
    int altint[MAX_ALTERNATIVAS];
};

struct alternativafloat {
    float altfloat[MAX_ALTERNATIVAS];
};

int main()
{
    struct pergunta p[MAX_PERGUNTAS];
    struct alternativaint a[MAX_PERGUNTAS];
    struct alternativafloat af[MAX_PERGUNTAS];

    char perguntaprochat[101];
    char resposta[5];
    char tipo[7];
    const char FIM[4] = "FIM";
    const char SIM[4] = "SIM";
    const char NAO[4] = "NAO";
    const char INT[4] = "INT";
    const char FLOAT[7] = "FLOAT";
    int foitreinado = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    
    printf("---Etapa de treinamento---\n");   
    for(i = 0; i <= MAX_PERGUNTAS; i++)   
    {
        resposta[0] = 'N';
        fgets(tipo, 7, stdin);
        paragrafo(tipo);
        if(strcmp(tipo, INT) == 0)
        {
            p[i].formato='I';
            fgets(p[i].texto, 101, stdin);
            paragrafo(p[i].texto);
            for(j=0;j < MAX_ALTERNATIVAS;j++)
            {
                scanf("%d", &a[i].altint[j]);
                getchar();
            }
            while(strcmp(resposta, SIM) != 0)
            {
                printf("Alternativa correta eh %d?\n", a[i].altint[k]);
                fgets(resposta, 5, stdin);
                paragrafo(resposta);
                if(strcmp(resposta, SIM) == 0) 
                {
                    p[i].corretaint = a[i].altint[k];
                    k = 0;
                }
                else if(strcmp(resposta, NAO) == 0) 
                {
                    k++;
                }
            }
        }
        else if(strcmp(tipo, FLOAT) == 0)
        {
            p[i].formato='F';
            fgets(p[i].texto, 101, stdin);
            paragrafo(p[i].texto);
            for(j=0;j < MAX_ALTERNATIVAS;j++)
            {
                scanf("%f", &af[i].altfloat[j]);
                getchar();
            }
            while(strcmp(resposta, SIM) != 0)
            {
                printf("Alternativa correta eh %.2f?\n", af[i].altfloat[k]);
                fgets(resposta, 5, stdin);
                paragrafo(resposta);
                if(strcmp(resposta, SIM) == 0) 
                {
                    p[i].corretafloat =  af[i].altfloat[k];
                    k = 0;
                }
                else if(strcmp(resposta, NAO) == 0) 
                {
                    k++;
                }
            }
        }
        else if(strcmp(tipo, FIM) == 0)
        {
        break;
        }
    }
    
    printf("---Etapa de testes---\n");  
    
    while(strcmp(perguntaprochat, FIM) != 0)
{
    fgets(perguntaprochat, 101, stdin);
    paragrafo(perguntaprochat);
    foitreinado = 0;

    for (i = 0; i < MAX_PERGUNTAS; i++)
    {
        if(strcmp(perguntaprochat, p[i].texto) == 0)
        {
            foitreinado = 1;
            if(p[i].formato == 'I')
            {
                printf("A resposta eh: %d\n", p[i].corretaint);
            }
            else if(p[i].formato == 'F')
            {
                printf("A resposta eh: %.2f\n", p[i].corretafloat);
            }
            break;
        }
    }
    if(strcmp(perguntaprochat, FIM) == 0)
    {
        break;
    }
    else if (foitreinado == 0)
    {
        printf("Me desculpe, ainda não fui treinado para responder essa pergunta.\n");
    }
}

    return 0;
}

void paragrafo(char s[])
{
    s[strlen(s) - 1] = '\0';
}