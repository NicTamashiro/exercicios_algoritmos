#include <stdio.h>

int main(){

    int ang1,ang2,ang3;
    printf("Quais os angulos do triangulo? \n");
    scanf("%d %d %d", &ang1,&ang2,&ang3);

    if(ang1 == 90 || ang2 == 90 || ang3 == 90){
        printf("triangulo Retangulo\n");
    } else if(ang1 > 90 || ang2 > 90 || ang3 > 90){
        printf("Triangulo Obtusangulo\n");
    } else if(ang1 < 90 && ang2 < 90 && ang3 < 90){
        printf("Triangulo Acutangulo\n");
    } else {
        printf("Nao se encaixa em nenhuma das condicoes, tente novamente");
    }


    return 0;
}
