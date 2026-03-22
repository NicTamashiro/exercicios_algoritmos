#include <stdio.h>

void decimal_para_binario(int n){
   if (n == 0){
        printf("%d", n);
        return;
   } else {
        decimal_para_binario(n/2);
        printf("%d", n % 2);
   }
}

int main(){

    int numero;

    printf("Digite um numero decimal: \n");
    scanf("%d", &numero);

    if (numero < 0){
        printf("Erro: use apenas numeros positivos.\n");
        return 1;
    } else if(numero == 0){
        printf("Binario: 0\n");
    } else {
        printf("Binario: ");
        decimal_para_binario(numero);
        printf("\n");
    }

    

    return 0; 
}