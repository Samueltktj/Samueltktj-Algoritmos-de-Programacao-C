#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b=(a/2);
    if(a==b*2+1) {
        printf("impar\n");
    }  
    else {
    printf("par\n");
    }
    
    return 0;
}