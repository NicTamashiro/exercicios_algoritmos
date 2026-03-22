#include <stdio.h>

int main(){

    int lados;
    float medida;

    printf("Escreva a quantidade de lados do seu poligono e a medida do lado (cm): \n");
    scanf("%d %f", &lados, &medida);

    if(lados == 3){
        printf("Triangulo com area: %.2f\n", (medida*medida)/2);
    } else if(lados == 4){
        printf("Quadrado com area: %.2f\n", medida*medida);
    } else if(lados == 5){
        printf("Pentagono");
    } else {
        printf("Insira valores de 3 a 5");
    }


    return 0;
}
