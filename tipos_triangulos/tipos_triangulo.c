#include <stdio.h>

int main(){

    float lado1,lado2,lado3;
    printf("Escreva os lados do triangulo: \n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado1 == lado3){
        printf("Triangulo equilatero");
    }
    else if (lado1 != lado2 && lado1 != lado3){
        printf("Triangulo escaleno");
    }
    else{
        printf("Triangulo isoscele");
    }
    return 0;
}
