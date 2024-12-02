#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
        switch(b) {
            case 1:
            printf("%d de janeiro de %d\n",a,c);
            break;
            case 2:
            printf("%d de fevereiro de %d\n",a,c);
            break;
            case 3:
            printf("%d de março de %d\n",a,c);
            break;
            case 4:
            printf("%d de abril de %d\n",a,c);
            break;
            case 5:
            printf("%d de maio de %d\n",a,c);
            break;
            case 6:
            printf("%d de junho de %d\n",a,c);
            break;
            case 7:
            printf("%d de julho de %d\n",a,c);
            break;
            case 8:
            printf("%d de agosto de %d\n",a,c);
            break;
            case 9:
            printf("%d de setembro de %d\n",a,c);
            break;
            case 10:
            printf("%d de outubro de %d\n",a,c);
            break;
            case 11:
            printf("%d de novembro de %d\n",a,c);
            break;
            case 12:
            printf("%d de dezembro de %d\n",a,c);
            break;
            default:
            printf("Mes invalido\n");
        }
    
    return 0;
}