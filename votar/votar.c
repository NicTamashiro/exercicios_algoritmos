#include <stdio.h>

int main(){

    int ano;

    printf("Digite seu ano de nascimento para saber se voce podera votar: ");
    scanf("%d", &ano);

    if(ano <= 2010){
        printf("Pode votar!\n");
    } else {
        printf("Nao pode votar!\n");
    }

    return 0;
}
