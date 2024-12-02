#include <stdio.h>

int main()
{
    float a,c;
    char b;
    scanf("%f%c%f",&a,&b,&c);
    if(b=='*') {
        printf("%.3f*%.3f=%.3f\n",a,c,(a*c));
    }
    else {
        if(b=='/') {
            printf("%.3f/%.3f=%.3f\n",a,c,(a/c));
        }
        else {
            if(b=='+') {
                printf("%.3f+%.3f=%.3f\n",a,c,(a+c));
            }
             else {
                 if(b=='-') {
                     printf("%.3f-%.3f=%.3f\n",a,c,(a-c));
                 }
                 else {
                    printf("Operador invalido\n");
                 }
             }
        }
    }
    return 0;
}