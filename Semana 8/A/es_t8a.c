
#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

int main() {
    struct Ponto coordenada1;
    struct Ponto coordenada2;
    float distanciaX;
    float distanciaY;
    float euclidiana; //// é a raiz quadrada da soma das diferencas das coordenadas (distancia entre os pontos) X e Y ao quadrado
                     //// sqrt : funcao que retorna a raiz quadrada
                     //// pow funcao que retorna o numero ao quadrado

    scanf("%f %f", &coordenada1.x, &coordenada1.y);
    scanf("%f %f", &coordenada2.x, &coordenada2.y);

    distanciaX = coordenada2.x - coordenada1.x;
    distanciaY = coordenada2.y - coordenada1.y;

    euclidiana = sqrt(pow(distanciaX, 2) + pow(distanciaY, 2));

    //printf("A distancia euclidiana eh %f\n", euclidiana);

    //// agora comparar as 2 coordenadas e ver se sao iguais (distancia < 0,0000001)
    
    if(euclidiana <= 0.0000001){
        printf("os pontos sao iguais\n");
    }
    else{
        printf("os pontos nao sao iguais\n");
    }

    return 0;
}