#include <stdio.h>

int main(){

    int senha;

    printf("Qual a sua senha?\n");
    scanf("%d", &senha);

    senha == 1234 ? printf("ACESSO PERMITIDO\n") : printf("ACESSO NEGADO\n");

    return 0;
}
