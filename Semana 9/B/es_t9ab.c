#include <stdio.h>
#include <math.h>

float media(char x, float y, float z);

int main()
{
    char caracter;
    float nota1;
    float nota2;

    caracter=getchar();
    scanf("%f %f",&nota1,&nota2);

    printf("%.3f\n",media(caracter,nota1,nota2));

    return 0;
}

float media(char x, float y, float z)
{
    float media;


    if(x=='A'){
        media=(y+z)/2;
    }
    else{
        media=sqrt(y*z);
    }


    return media;
}