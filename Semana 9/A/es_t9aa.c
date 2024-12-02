#include <stdio.h>
#include <math.h>

float volume_esfera (float x)
{
    float pi=3.14159;
    float r=x;
    float v=pi*pow(r,3)*4/3;

   
    return v;
}

int main()
{
    float r;

    scanf("%f",&r);

    printf("%.2f\n",volume_esfera(r));



    return 0;
}