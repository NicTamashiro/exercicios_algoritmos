#include <stdio.h>
#include <string.h>
#include <math.h>

int binario_para_decimal(char *bin) {
    int decimal = 0;
    int len = strlen(bin);

    for (int i = 0; i < len; i++) {
        if (bin[i] == '1') {
            decimal += (int)pow(2, len - 1 - i);
        }
    }

    return decimal;
}

int main() {
    char bin[65];

    printf("Digite um numero binario: ");
    scanf("%64s", bin);

    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            printf("Erro: numero invalido! Use apenas 0 e 1.\n");
            return 1;
        }
    }

    int resultado = binario_para_decimal(bin);
    printf("Decimal: %d\n", resultado);

    return 0;
}