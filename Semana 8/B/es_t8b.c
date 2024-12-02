
#include <stdio.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

int main() {
    struct Ponto Rexterno1;
    struct Ponto Rexterno2;
    struct Ponto Rinterno1;
    struct Ponto Rinterno2;

    scanf("%d %d", &Rexterno1.x, &Rexterno1.y);
    scanf("%d %d", &Rexterno2.x, &Rexterno2.y);
    scanf("%d %d", &Rinterno1.x, &Rinterno1.y);
    scanf("%d %d", &Rinterno2.x, &Rinterno2.y);
    
    if(((Rexterno1.x <= Rinterno1.x) && (Rexterno2.x >= Rinterno2.x)) && ((Rexterno1.y <= Rinterno1.y) && (Rexterno2.y >= Rinterno2.y))){
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}