#include <stdio.h>

void decimal_para_binario(int n){
    if (n == 0){
        printf("0");
        return;
    }

    int bits[32];
    int i = 0;

    while (n > 0){
        bits[i] = n % 2;
        i++;
        n/=2;
    }

    for(int j = i - 1; j >= 0; j--){
        printf("%d", bits[j]);
    }
}

int main(){

    int numero;

    printf("Digite um numero decimal: \n");
    scanf("%d", &numero);

    if (numero < 0){
        printf("Erro: use apenas numeros positivos.\n");
        return 1;
    }

    printf("Binario: ");
    decimal_para_binario(numero);
    printf("\n");

    return 0;
}