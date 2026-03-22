#include <stdio.h>

int main(){

    int qtd;

    printf("Quantas macas voce levara?\n");
    scanf("%d", &qtd);

    qtd >= 12 ? printf("Valor a pagar: R$%.2f\n", qtd*0.25) : printf("Valor a pagar: %.2f\n", qtd*0.30);


    return 0;
}
