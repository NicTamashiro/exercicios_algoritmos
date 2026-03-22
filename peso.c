#include <stdio.h>

int main(){

    int sexo;
    float altura;

    printf("Digite sua altura (m) e seu sexo (1) feminino ou (2) masculino: \n");
    scanf("%f %d", &altura, &sexo);

    if(sexo == 2){
        printf("Seu peso ideal: %.2f\n", (72.7 * altura) - 58);
    } else {
        printf("Seu peso ideal: %.2f\n", (62.1 * altura) - 44.7);
    }


    return 0;
}
