#include <stdio.h>
#include <math.h>
#include <string.h>

struct IMC {
    float h; //altura
    float p; //peso
    char nome[50]; //nome 
};

int main()

{
    struct IMC pessoa[20];

    scanf("%f",&pessoa[0].h);
    scanf("%f",&pessoa[0].p);
    fgets(pessoa[0].nome,50,stdin);

    //calculo do IMC = p/h*h

    float imc[20];

    imc[0]= pessoa[0].p/pow(pessoa[0].h,2);

    printf("%.3f\n",imc[0]);







    return 0;

}
